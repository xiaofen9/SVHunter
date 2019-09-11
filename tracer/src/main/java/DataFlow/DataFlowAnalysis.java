package DataFlow;

import soot.*;
import soot.jimple.*;
import soot.jimple.internal.JimpleLocal;
import soot.tagkit.*;
import soot.toolkits.graph.DirectedGraph;
import soot.toolkits.graph.ExceptionalUnitGraph;

import java.util.*;
import java.util.regex.Pattern;
import javafx.util.Pair;
import java.io.PrintWriter;
import java.io.FileNotFoundException;

public class DataFlowAnalysis {

    private NavigableSet<Context> worklist;
	private Map<SootMethod,List<Context>> contexts;
	private Set<Pair<SootMethod, Unit>> transitionsAddedMethods;
	private Set<String> endMethod;
	private Map<SootMethod, DirectedGraph<Unit>> cfgCache;

	private Map<SootMethod,List<Pair<SootMethod,Unit>>> calleeToCallerTable;
    private Map<Value,List<Pair<SootMethod,Unit>>> fieldVariableTable;
	private List<Pair<String,String>> sensitiveMethodList;
	private Map<String, Pair<String,String>> normalDFMethodList;
	private Map<String, Pair<String,String>> specialDFMethodList;
	public int totalPRIA = 0;
	public int totalMRIA = 0;
	public int totalRIA = 0;


    public DataFlowAnalysis(Map<SootMethod,List<Pair<SootMethod,Unit>>> calleeToCallerTable, Map<Value,List<Pair<SootMethod,Unit>>> fieldVariableTable,
                            List<Pair<String,String>> sensitiveMethodList, Map<String, Pair<String,String>> normalDFMethodList,
                            Map<String, Pair<String,String>> specialDFMethodList){
        this.calleeToCallerTable = calleeToCallerTable;
        this.fieldVariableTable = fieldVariableTable;
        this.sensitiveMethodList = sensitiveMethodList;
        this.normalDFMethodList = normalDFMethodList;
		this.specialDFMethodList = specialDFMethodList;
		this.transitionsAddedMethods = new HashSet<>();
		this.endMethod = new HashSet<>();
		this.worklist = new TreeSet<>();
		this.contexts = new HashMap<>();
		this.cfgCache = new HashMap<>();
    }


    public void doAnalysis() {

		PrintWriter pw = null;
		try {
			pw = new PrintWriter("./backwardFlow");
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		}

		for (Pair<String,String> func: sensitiveMethodList) {
			String className = func.getKey();
			String methodName = func.getValue().split("@")[0];
			String tags = func.getValue().split("@")[1];
			String usageDataType = func.getValue().split("@")[2];
			String initStatment = "";
			tags = tags.substring(1,tags.length()-1);
			int beginLines = Integer.parseInt(tags.split("-")[0]);
			int endLines = Integer.parseInt(tags.split("-")[1]);
			List<String> tagList = new ArrayList<>();
			for (int i = beginLines; i < endLines + 1; i++) {
				tagList.add(Integer.toString(i));
			}


			if (Config.baseControllerType.equals("floodlight") && className.contains("ParseUtils") && methodName.equals("parseHexOrDecInt")) continue;

			Context currentContext;
			currentContext = addEntryPoint(className,methodName,tagList);
			if (currentContext==null) continue;

			Unit currentNode;
			if (currentContext.getWorkList().iterator().hasNext()) currentNode = currentContext.getWorkList().iterator().next();
			else currentNode = null;
			SootMethod currentMethod = currentContext.getMethod();
			Pair<SootMethod,Unit> current = new Pair<>(currentMethod, currentNode);

			endMethod = new HashSet<>();
			transitionsAddedMethods = new HashSet<>();
			transitionsAddedMethods.add(current);

			while (!worklist.isEmpty()) {
				currentContext = worklist.last();


				if (detectCatchException(currentContext,usageDataType)) {
					worklist.remove(currentContext);
					continue;
				}

				//simple check on xxe mitigation
				if (currentContext.getMethod().getName().startsWith("disable")) {
				    worklist.remove(currentContext);
				    continue;
                }

				if (currentContext.getWorkList().isEmpty()) {
					worklist.remove(currentContext);

					if (currentContext.getMethod().equals(currentMethod)) {
						if (currentContext.getInitStatment().size()==0) initStatment = "";
						else initStatment = currentContext.getInitStatment().get(0);
					}
					ArrayList<Context> addedCallerList = new ArrayList<>();
					if (currentContext.isIsCalled()==false)
						addedCallerList = addCaller(currentContext, currentContext.getEntryValue());
					if (updateEndPoint(currentContext, currentContext.getTaintValue(), !(addedCallerList.isEmpty()))){
						for (Context addedCaller: addedCallerList)
							worklist.remove(addedCaller);
					}
					continue;
				}

				Unit node = currentContext.getWorkList().pollFirst();
				List<DataFlowValue> taintValue = currentContext.getTaintValue();

				if (!checkTaint(currentContext,node,taintValue)) continue;
				if (((Stmt) node).containsInvokeExpr()) taintValue = callFlowFunction(currentContext, node, taintValue);
				else taintValue = normalFlowFunction(currentContext, node, taintValue);

				currentContext.setTaintValue(taintValue);

			}
			if (endMethod.size()==0) continue;
			pw.write("SensitiveMethod: \n");
			pw.write("\t<" + className + ": " + methodName + "> at Line " + tags + "\n");
			pw.write("\tConsequence: " + usageDataType + "\n");
			pw.write("\tUsage: " + initStatment + "\n");
			pw.write("SourceData:\n");
			for (String endpoint: endMethod)
				pw.write(endpoint + "\n");
			pw.write("-----------------------------------------------------------------------------------------------\n");
		}
		pw.close();
	}


    private Value updateValue(Value value){
        //Local, FieldRef, Constant
        if (value instanceof CastExpr) return ((CastExpr) value).getOp();
        if (value instanceof ArrayRef) return ((ArrayRef) value).getBase();
        return value;
    }

    private boolean traverseClass(SootClass checkClass, String matchName){
        LinkedList<SootClass> queue = new LinkedList<>();
        queue.add(checkClass);
        while (queue.size() > 0) {
            SootClass curClass = queue.removeFirst();
            if (!matchName.contains(".") && curClass.getName().contains(matchName)
                || matchName.contains(".") && curClass.getName().equals(matchName)) {
                return true;
            }
            if (curClass.hasSuperclass() && curClass.getSuperclass() != null) queue.add(curClass.getSuperclass());
            Iterator<SootClass> it = curClass.getInterfaces().iterator();
            while (it.hasNext()) queue.add(it.next());
        }
        return false;
    }

    private Pair<String,String> checkDataType(SootMethod method){
        SootClass curClass = method.getDeclaringClass();
        Pair<String,String> res = null;
        if (normalDFMethodList.containsKey(curClass.getName() + " " + method.getName())==false) {
            for (String mark : specialDFMethodList.keySet()) {
                boolean skipped = false;
                for (String item: Config.skippedIdentity){
                    if (skipped) break;
                    if (mark.contains(item))skipped = true;
                }
                if (skipped) continue;
                for (String item: Config.skippedDataType){
                    if (skipped) break;
                    if (specialDFMethodList.get(mark).getKey().equals(item)) skipped = true;
                }
                if (skipped) continue;
                for (String item: Config.middleMethodDrivenDataType){
                    if ((specialDFMethodList.get(mark).getKey().equals(item) || mark.equals(item)) && mark.equals(method.getName())) {
                        res = specialDFMethodList.get(mark);
                        skipped = true;
                        break;
                    }
                }
                if (skipped) break;
                if (traverseClass(curClass,mark)) res = specialDFMethodList.get(mark);
            }
        }
        else res = normalDFMethodList.get(curClass.getName() + " " + method.getName());
        return res;
    }

    private boolean checkEntryValue(Value value, List<Pair<Integer,DataFlowValue>> entryValue) {
        for (Pair<Integer,DataFlowValue> index: entryValue) {
            DataFlowValue dfv = index.getValue();
            if (dfv.getData().equals(value))
                return true;
        }
        return false;
    }

    private boolean updateEndPoint(Context context, List<DataFlowValue> taintValue, boolean hasCaller) {
        if (taintValue==null) return false;
        SootMethod curMethod = context.getMethod();
        SootClass methodClass = curMethod.getDeclaringClass();
        Type returnType = curMethod.getReturnType();
        boolean updated = false;
        for (DataFlowValue dataFlowValue: taintValue){
            String endpoint = "";
            String pid = "";
            Value value = dataFlowValue.getData();
            Type type = value.getType();


            boolean meaningful = true;

            if (value instanceof InstanceFieldRef) endpoint = endpoint + "\tType: " + value.getClass() + "\n";
            else if (value instanceof StaticFieldRef) endpoint = endpoint + "\tType: " + value.getClass() + "\n";
            else if (value instanceof Constant) {
                if (value instanceof IntConstant || value instanceof LongConstant || value instanceof NullConstant) {
                    dataFlowValue.setDataTypeAndOperation(null);
                    meaningful = false;
                }
                if (value instanceof StringConstant){
                    String sc = ((StringConstant) value).value;
                    if (Pattern.compile("[a-zA-Z/\\.\\-{}]+").matcher(sc).matches()==false) meaningful = false;
                    if (meaningful==false) dataFlowValue.setDataTypeAndOperation(null);
                }
                endpoint = endpoint + "\tType: " + value.getClass() + "\n";
            }
            else if (type instanceof RefType && ((RefType)type).getClassName().equals(methodClass.getName()))
                endpoint = endpoint + "\tType: " + value.getClass() + "\n";
            else if (value instanceof JimpleLocal && hasCaller==false && context.isIsCalled()==false && checkEntryValue(value,context.getEntryValue()))
                endpoint = endpoint + "\tType: " + value.getClass() + "\n";
            else continue;


            if (dataFlowValue.getDataTypeAndOperation()==null && meaningful) {
                for (String mark : specialDFMethodList.keySet()) {

                    for (String item: Config.endMethodDrivenDataType) {
                        if ((specialDFMethodList.get(mark).getKey().equals(item) || mark.equals(item)) && mark.equals(curMethod.getName())){
                            dataFlowValue.setMethod(curMethod);
                            dataFlowValue.setDataTypeAndOperation(specialDFMethodList.get(mark));
                            break;
                        }
                    }
                    if (dataFlowValue.getDataTypeAndOperation()!=null) break;
                    for (String item: Config.classDrivenDataType) {
                        if ((specialDFMethodList.get(mark).getKey().equals(item) || mark.contains(item)) && traverseClass(methodClass, mark)) {
                            dataFlowValue.setMethod(curMethod);
                            dataFlowValue.setDataTypeAndOperation(specialDFMethodList.get(mark));
                            break;
                        }
                    }
                    if (dataFlowValue.getDataTypeAndOperation()!=null) break;
                    for (String item: Config.returnTypeDrivenDataType) {
                        if (mark.equals(item) && returnType instanceof RefType &&
                                ((RefType) returnType).hasSootClass() && ((RefType) returnType).getSootClass().getName().contains(mark)) {
                            dataFlowValue.setMethod(curMethod);
                            dataFlowValue.setDataTypeAndOperation(specialDFMethodList.get(mark));
                            break;
                        }
                    }
                    if (dataFlowValue.getDataTypeAndOperation()!=null) break;
                    for (String item: Config.valueTypeDrivenDataType) {
                        if (mark.equals(item) && type instanceof RefType &&
                                ((RefType) type).hasSootClass() && traverseClass(((RefType) type).getSootClass(), mark)) {
                            dataFlowValue.setMethod(curMethod);
                            dataFlowValue.setDataTypeAndOperation(specialDFMethodList.get(mark));
                            break;
                        }
                    }
                    if (dataFlowValue.getDataTypeAndOperation()!=null) break;
                    if (Config.baseControllerType.equals("opendaylight") && mark.equals("RpcService")){
                        LinkedList<SootClass> queue = new LinkedList<>();
                        queue.addAll(methodClass.getInterfaces());
                        while (queue.size()>0){
                            SootClass curClass = queue.removeFirst();
                            if (curClass.getShortName().endsWith("Service") && traverseClass(curClass,mark)){
                                dataFlowValue.setMethod(curMethod);
                                dataFlowValue.setDataTypeAndOperation(specialDFMethodList.get(mark));
                                break;
                            }
                        }
                    }
                    if (dataFlowValue.getDataTypeAndOperation()!=null) break;
                }
            }


            if (dataFlowValue.getDataTypeAndOperation()==null) pid = value.toString();
            else if (dataFlowValue.getDataTypeAndOperation().getKey().equals("net_state")){
                if (Config.baseControllerType.equals("onos")) {
                    for (Tag tag : methodClass.getTags()) {
                        if (tag instanceof VisibilityAnnotationTag) {
                            pid = "root";
                            for (AnnotationTag aTag : ((VisibilityAnnotationTag) tag).getAnnotations()) {
                                if (!aTag.getType().contains("Path")) continue;
                                pid = pid + "." + aTag.toString().split("value: ")[1].trim();
                                if (pid.equals("./")) pid = ".root";
                                break;
                            }
                        }
                    }
                    if (pid.split("\\.").length > 1 && value instanceof StringConstant &&
                            ((StringConstant)value).value.endsWith(pid.split("\\.")[1]) && ((StringConstant)value).value.startsWith("..")){
                        pid = ((StringConstant)value).value.replaceAll("/",".").substring(3);
                        dataFlowValue.setDataTypeAndOperation(new Pair<>("fs","read"));
                    } else {
                        for (Tag tag : curMethod.getTags()) {
                            if (tag instanceof VisibilityAnnotationTag) {
                                for (AnnotationTag aTag : ((VisibilityAnnotationTag) tag).getAnnotations()) {
                                    if (!aTag.getType().contains("Path")) continue;
                                    String tmp = aTag.toString().split("value: ")[1].trim();
                                    if (tmp.startsWith("/")) tmp = tmp.substring(1);
                                    pid = pid + "." + tmp;
                                    break;
                                }
                            }
                        }
                        for (Tag tag : curMethod.getTags()) {
                            if (tag instanceof VisibilityAnnotationTag) {
                                for (AnnotationTag aTag : ((VisibilityAnnotationTag) tag).getAnnotations()) {
                                    if (aTag.getType().contains("GET")) {
                                        dataFlowValue.setDataTypeAndOperation(new Pair<>("net_state", "read"));
                                        break;
                                    }
                                    if (aTag.getType().contains("POST") || aTag.getType().contains("DELETE")) {
                                        dataFlowValue.setDataTypeAndOperation(new Pair<>("net_state", "write"));
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    if (pid.length() > 0) {
                        pid = pid.replace("/", ".");
                        pid = pid.replaceAll("\\.\\.", ".");
                        pid = pid.replaceAll("\\.\\.", ".");
                        pid = pid.replaceAll("\\.\\.", ".");
                        pid = pid.replaceAll("\\.\\.", ".");
                    } else dataFlowValue.setDataTypeAndOperation(null);
                } else if (Config.baseControllerType.equals("floodlight")) {
                    if (value instanceof StringConstant) {
                        pid = ((StringConstant) value).value;

                        for (Unit unit : methodClass.getMethodByName("basePath").getActiveBody().getUnits()) {
                            if (unit instanceof ReturnStmt) {
                                pid = ((StringConstant) ((ReturnStmt) unit).getOp()).value + pid;
                                break;
                            }
                        }
                        if (pid.startsWith("/")) pid = "root" + pid;
                        if (pid.endsWith("/")) pid = pid.substring(0, pid.length() - 1);
                        pid = pid.replace("/", ".");
                    } else dataFlowValue.setDataTypeAndOperation(null);
                } else if (Config.baseControllerType.equals("opendaylight")) {
                    pid = "URL";
                }
                pid = pid.replace(" ", "");
                pid = pid.replace("*", "");
                pid = pid.replace(":", "");
                pid = pid.replace("?", "");
                pid = pid.replace("$", "");
            }
            else if (dataFlowValue.getDataTypeAndOperation().getKey().equals("proto_msg")) {
                if (Config.baseControllerType.equals("onos") && curMethod.getName().equals("getDevices")) pid = "OFFeatureReply";
                if(Config.baseControllerType.equals("floodlight") && curMethod.getName().equals("getSwitchFeaturesReply")) pid = ((RefType)returnType).getSootClass().getShortName();
                if (pid.length()==0) pid = methodClass.getShortName().split("\\$")[0];
                pid = pid.replace("$", "");
            }
            else if (dataFlowValue.getDataTypeAndOperation().getKey().equals("db")) pid = value.toString();
            else if (dataFlowValue.getDataTypeAndOperation().getKey().equals("fs")) {
                if (value instanceof StringConstant) pid = ((StringConstant)value).value.replaceAll("/",".");
                if (pid.length()==0) dataFlowValue.setDataTypeAndOperation(null);
                else if (pid.startsWith(".")) dataFlowValue.setDataTypeAndOperation(null);
                else if (pid.endsWith(".")) dataFlowValue.setDataTypeAndOperation(null);

            } else assert false;
            endpoint = endpoint + "\tpid: " + pid + "\n";
            endpoint = endpoint + "\tDFMethod: " + curMethod + "\n";
            endpoint = endpoint + "\tDataType & operation: " + dataFlowValue.getDataTypeAndOperation() + "\n";
            endpoint = endpoint + "\tsinkData: " + dataFlowValue.getSinkData() + "\n";
            if (endMethod.contains(endpoint)) continue;
            if (meaningful) totalMRIA += 1;
            totalPRIA += 1;
            if (dataFlowValue.getDataTypeAndOperation()!=null) {
                totalRIA += 1;
                endMethod.add(endpoint);
                updated = true;
            }
        }
        return updated;
    }


    private boolean detectCatchException(Context context, String usage) {
        SootMethod sootMethod = context.getMethod();
        if (!usage.contains("crash")) return false;
        for (Unit unit: sootMethod.getActiveBody().getUnits()){
            if (unit.toString().contains("caughtexception")) return true;
        }
        return false;
    }

    private boolean checkTaint(Context context, Unit node, List<DataFlowValue> taintValue) {
        boolean check = false;
        if (node.toString().contains("Logger")) return check;
        if (node instanceof AssignStmt){
            Value lhs = updateValue(((AssignStmt) node).getLeftOp());
            for (DataFlowValue dataFlowValue: taintValue){
                if (dataFlowValue.getData().equals(lhs)){
                    check = true;
                    break;
                }
            }
            if (check && fieldVariableTable.containsKey(lhs))
                transitionsAddedMethods.add(new Pair<>(context.getMethod(),node));
            return check;
        }
        if (node instanceof IdentityStmt){
            Value lhs = ((IdentityStmt) node).getLeftOp();
            Value rhs = ((IdentityStmt) node).getRightOp();
            Boolean l = check;
            for (DataFlowValue dataFlowValue: taintValue){
                if (dataFlowValue.getData().equals(lhs)){
                    l = true;
                    break;
                }
            }
            Boolean r = rhs instanceof ParameterRef;
            return (l && r);
        }
        if (node instanceof ReturnStmt && context.isHasCallee()) return true;
        if (node instanceof InvokeStmt){
            InvokeExpr exp = ((Stmt) node).getInvokeExpr();
            if (exp.getArgCount() == 0) return false;
            Value instance = null;
            if (exp instanceof VirtualInvokeExpr) instance = updateValue(((VirtualInvokeExpr) exp).getBase());
            else if (exp instanceof SpecialInvokeExpr) instance = updateValue(((SpecialInvokeExpr) exp).getBase());
            if (instance == null) return false;
            if (exp.toString().contains("void <init>") || exp.getMethod().getName().startsWith("set") || exp.getMethod().getName().equals("put")) {
                for (DataFlowValue dataFlowValue : taintValue) {
                    if (dataFlowValue.getData().equals(instance)) {
                        check = true;
                        break;
                    }
                }
            }
            return check;
        }
        return check;
    }

    private List<DataFlowValue> extractTaintValue(Unit node) {
        List<DataFlowValue> res = new ArrayList<>();
        if (((Stmt)node).containsInvokeExpr()){
            InvokeExpr exp = ((Stmt) node).getInvokeExpr();
            if (exp instanceof InstanceInvokeExpr){
                Value instance = updateValue(((InstanceInvokeExpr) exp).getBase());
                DataFlowValue dataFlowValue = new DataFlowValue(instance);
                dataFlowValue.addSinkData("Instance");
                res.add(dataFlowValue);
            }
            for (int i = 0; i < exp.getArgCount(); ++i){
                Value value = updateValue(exp.getArg(i));
                DataFlowValue dataFlowValue = new DataFlowValue(value);
                dataFlowValue.addSinkData(Integer.toString(i));
                res.add(dataFlowValue);
            }
        } else if (node instanceof AssignStmt){
            LinkedList<Value> queue = new LinkedList<Value>();
            queue.addLast(((AssignStmt) node).getRightOp());
            int count = 0;
            while (queue.size() > 0){
                Value exp = queue.removeFirst();
                if (exp instanceof BinopExpr){
                    queue.addLast(((BinopExpr) exp).getOp1());
                    queue.addLast(((BinopExpr) exp).getOp2());
                }
                else {
                    Value value = updateValue(exp);
                    DataFlowValue dataFlowValue = new DataFlowValue(value);
                    dataFlowValue.addSinkData(Integer.toString(count));
                    count++;
                    res.add(dataFlowValue);
                }
            }
        } else if (node instanceof ReturnStmt) {
            Value arg = updateValue(((ReturnStmt) node).getOp());
            DataFlowValue dataFlowValue = new DataFlowValue(arg);
            dataFlowValue.addSinkData("0");
            res.add(dataFlowValue);
        } else assert false;

        return res;
    }

    private Context addEntryPoint(String targetClassPath, String method, List<String> tagList) {
        String targetClass = targetClassPath;
        SootClass entryClass = Scene.v().getSootClass(targetClass);

        // If entryClass has no method, it must be an inner class of another class.
        // In Soot, we need to use $ to get the instance of an inner class.
        if(entryClass.getMethods().size()==0){
            String innerClassName = targetClassPath.replaceAll(".*\\.", "");
            targetClass = targetClassPath.replace("." + innerClassName, "$" + innerClassName);
            entryClass = Scene.v().getSootClass(targetClass);
        }
        if (entryClass.getMethods().size() == 0) return null;
        List<SootMethod> methods = entryClass.getMethods();
        SootMethod entryPoint = null;
        int targetLN = Integer.parseInt(tagList.get(tagList.size()-1));
        int maxLN = -1;
        int minLN = -1;
        for (SootMethod sootMethod: methods){
            if (sootMethod.getName().equals(method) && sootMethod.hasActiveBody()){
                Iterator<Unit> body = sootMethod.getActiveBody().getUnits().iterator();
                while (body.hasNext()){
                    Unit unit = body.next();
                    if (unit.getTags().isEmpty()) continue;
                    int lineNumber =  ((LineNumberTag)unit.getTags().get(0)).getLineNumber();
                    if (maxLN == -1) maxLN = lineNumber;
                    else maxLN = Math.max(maxLN,lineNumber);
                    if (minLN == -1) minLN = lineNumber;
                    else minLN = Math.min(minLN,lineNumber);
                }
                if (targetLN <= maxLN && targetLN >= minLN - 2){
                    entryPoint = sootMethod;
                    break;
                }
            }
        }
        if (entryPoint==null) return null;
        List<DataFlowValue> exitValue = new ArrayList<>();
        if (targetLN < minLN)  exitValue.add(new DataFlowValue((Value)null));
        Context newContext = initContext(entryPoint, exitValue, "\t  " + entryPoint + "\n");
        SootMethod sm = null;
        Pair dataTypeAndOperation = null;
        if (Config.baseControllerType.equals("opendaylight")) dataTypeAndOperation = checkDataType(newContext.getMethod());
        while (!newContext.getWorkList().isEmpty() && targetLN >= minLN){
            Unit node = newContext.getWorkList().pollFirst();
            if (node.getTags().isEmpty()) continue;
            String ctag = node.getTags().get(0).toString();
            if (tagList.contains(ctag)) {
                List<DataFlowValue> taintValue = extractTaintValue(node);
                if (taintValue.size()==0) continue;
                if (dataTypeAndOperation!=null) {
                    for (DataFlowValue dfv : taintValue) {
                        dfv.setDataTypeAndOperation(dataTypeAndOperation);
                        dfv.setMethod(newContext.getMethod());
                    }
                }
                newContext.setTaintValue(taintValue);
                if (((Stmt)node).containsInvokeExpr()) {
                    newContext.addInitStatment(node.toString());
                    sm = ((Stmt) node).getInvokeExpr().getMethod();
                }
                else {
                    Iterator<Unit> body = entryPoint.getActiveBody().getUnits().iterator();
                    Value value = taintValue.get(0).getData();
                    while (body.hasNext()){
                        Unit unit = body.next();
                        if (unit instanceof AssignStmt && updateValue(((AssignStmt) unit).getLeftOp()).equals(value)) {
                            newContext.addInitStatment(((AssignStmt) unit).getRightOp().toString());
                            if (((AssignStmt) unit).containsInvokeExpr()) sm = ((AssignStmt) unit).getInvokeExpr().getMethod();
                            break;
                        }
                    }
                }
                break;
            }
        }
        if (targetLN < minLN) {
            newContext.setTaintValue(new ArrayList<DataFlowValue>());
            newContext.setHasCallee(true);
        }
        return newContext;
    }

    private ArrayList<Context> addCaller(Context context, List<Pair<Integer,DataFlowValue>> entryValue) {
        SootMethod callee = context.getMethod();
        SootClass calleeClass = callee.getDeclaringClass();
        String calleeName = callee.getName();
        ArrayList<Context> addedCallerList = new ArrayList<>();
        Pair<String,String> dataTypeAndOperation = null;
        if (!calleeName.equals("getRestlet")) dataTypeAndOperation = checkDataType(callee);
        if (Config.baseControllerType.equals("onos") && calleeName.equals("getDevices") ||
                Config.baseControllerType.equals("floodlight") && calleeName.equals("getSwitchFeaturesReply"))
            return addedCallerList;
        LinkedList<SootClass> queue = new LinkedList<>();
        Set<SootClass> relatedClasses = new HashSet<>();
        queue.add(calleeClass);
        while (queue.size() > 0) {
            SootClass curClass = queue.removeFirst();
            relatedClasses.add(curClass);
            queue.addAll(curClass.getInterfaces());
            if (curClass.hasSuperclass()) queue.add(curClass.getSuperclass());
        }

        // Traverse the calleeToCallerTable to find callers of the callee
        for (SootMethod key : calleeToCallerTable.keySet()) {

            //get the method name, class name and (if exists) superclass name of key and callee
            String keyName = key.getName();
            if (!keyName.equals(calleeName)) continue;
            String keyClassName = key.getDeclaringClass().getName();
            List<Pair<SootMethod, Unit>> callerList = null;

            // compare the method name and class name between callee and key
            // if they are equal to each other, add the callers to contextTransitions
            for (SootClass relatedClass : relatedClasses) {
                if (keyClassName.equals(relatedClass.getName())) {
                    callerList = calleeToCallerTable.get(key);
                    break;
                }
            }
            if (callerList != null) {
                String previousPath = context.getPath();
                for (Pair<SootMethod, Unit> caller : callerList) {
                    if (transitionsAddedMethods.contains(caller)) continue;
                    if (((Stmt) caller.getValue()).getInvokeExpr().getArgCount()!=callee.getParameterCount() &&
                            !caller.getKey().getName().equals("getRestlet")) continue;
                    if (calleeClass.isPublic()==false && caller.getKey().getDeclaringClass().getName().equals(calleeClass.getName())==false)
                        continue;

                    Context callerContext = initContext(caller.getKey(), new ArrayList(), previousPath + "\t->" + caller.getKey() + "\n");
                    addedCallerList.add(callerContext);
                    //init the taintValue of caller Value
                    List<DataFlowValue> initTaintValue = new ArrayList();
                    Set<String> instanceSet = new HashSet<>();
                    for (Pair<Integer,DataFlowValue> index: entryValue) {
                        Value value = updateValue(((Stmt) caller.getValue()).getInvokeExpr().getArg(index.getKey()));
                        DataFlowValue dataFlowValue = new DataFlowValue(value);
                        for (String s:index.getValue().getSinkData()) {
                            dataFlowValue.addSinkData(s);
                            instanceSet.add(s);
                        }
                        dataFlowValue.setDataTypeAndOperation(index.getValue().getDataTypeAndOperation());
                        dataFlowValue.setMethod(index.getValue().getMethod());
                        if (dataTypeAndOperation!=null){
                            dataFlowValue.setDataTypeAndOperation(dataTypeAndOperation);
                            dataFlowValue.setMethod(caller.getKey());
                        }
                        initTaintValue.add(dataFlowValue);
                    }
                    Tag tag = caller.getValue().getTags().get(0);


                    Iterator<Unit> iterator = callerContext.getWorkList().iterator();
                    while (iterator.hasNext() && keyName.equals("<init>")==false){
                        Unit node = iterator.next();
                        if (node.getTags().size()==0) continue;
                        if (node.getTags().get(0).equals(tag)){
                            if (((Stmt) node).containsInvokeExpr()){
                                InvokeExpr expr = ((Stmt) node).getInvokeExpr();
                                if (expr instanceof InstanceInvokeExpr) {
                                    Value value = updateValue(((InstanceInvokeExpr) expr).getBase());
                                    if (value.toString().equals("r0") && value.getType().toString().equals(caller.getKey().getDeclaringClass().getName())) continue;
                                    DataFlowValue dataFlowValue = new DataFlowValue(value);
                                    if (instanceSet.size()==0) dataFlowValue.addSinkData("InstanceDuringFlow");
                                    else for (String s: instanceSet) dataFlowValue.addSinkData(s);
                                    if (dataTypeAndOperation!=null) {
                                        dataFlowValue.setDataTypeAndOperation(dataTypeAndOperation);
                                        dataFlowValue.setMethod(caller.getKey());
                                    }
                                    initTaintValue.add(dataFlowValue);
                                }
                            }
                        }
                    }

                    if (Config.baseControllerType.equals("floodlight") && caller.getKey().getName().equals("getRestlet")) {
                        Value value = updateValue(((Stmt) caller.getValue()).getInvokeExpr().getArg(0));
                        DataFlowValue dataFlowValue = new DataFlowValue(value);
                        dataFlowValue.addSinkData("Floodlight getRestlet");
                        if (dataTypeAndOperation!=null) {
                            dataFlowValue.setDataTypeAndOperation(dataTypeAndOperation);
                            dataFlowValue.setMethod(caller.getKey());
                        }
                        initTaintValue.add(dataFlowValue);
                    }
                    if (initTaintValue.size() > 0) {
                        callerContext.setTaintValue(initTaintValue);
                        while (!callerContext.getWorkList().isEmpty()) {
                            Unit node = callerContext.getWorkList().pollFirst();
                            if (node.equals(caller.getValue())) break;
                        }
                        transitionsAddedMethods.add(caller);
                    }
                    else {
                        worklist.remove(callerContext);
                        addedCallerList.remove(callerContext);
                    }
                }
            }
        }
        for (DataFlowValue dfv: context.getTaintValue()){
            Value value = dfv.getData();
            if (fieldVariableTable.containsKey(value)){
                for (Pair<SootMethod,Unit> caller: fieldVariableTable.get(value)) {
                    if (transitionsAddedMethods.contains(caller)) continue;
                    List<DataFlowValue> initTaintValue = extractTaintValue(caller.getValue());
                    if (initTaintValue.size() > 0) {
                        Context callerContext = initContext(caller.getKey(), new ArrayList(), context.getPath() + "\t->" + caller.getKey() + "\n");
                        callerContext.setTaintValue(initTaintValue);
                        while (!callerContext.getWorkList().isEmpty()) {
                            Unit node = callerContext.getWorkList().pollFirst();
                            if (node.equals(caller.getValue())) break;
                        }
                        transitionsAddedMethods.add(caller);
                    }
                }
            }
        }
        return addedCallerList;
    }

    private List<DataFlowValue> normalFlowFunction(Context context, Unit node, List<DataFlowValue> taintValue) {
        List<DataFlowValue> newValue = copy(taintValue);
        if (node instanceof AssignStmt){
            LinkedList<Value> queue = new LinkedList<Value>();
            Value lhs = updateValue(((AssignStmt) node).getLeftOp());
            Set<String> sinkData = null;
            SootMethod method = null;
            Pair<String,String> dataTypeAndOperation = null;
            for (DataFlowValue dataFlowValue: taintValue){
                if (dataFlowValue.getData().equals(lhs)){
                    sinkData = dataFlowValue.getSinkData();
                    method = dataFlowValue.getMethod();
                    dataTypeAndOperation = dataFlowValue.getDataTypeAndOperation();
                    break;
                }
            }
            queue.addLast(((AssignStmt) node).getRightOp());
            while (queue.size() > 0){
                Value exp = queue.removeFirst();
                if (exp instanceof BinopExpr){
                    queue.addLast(((BinopExpr) exp).getOp1());
                    queue.addLast(((BinopExpr) exp).getOp2());
                }
                else {
                    exp = updateValue(exp);
                    boolean addValue = true;
                    for (DataFlowValue dataFlowValue: newValue){
                        if (dataFlowValue.getData().equals(exp)){
                            for (String s: sinkData) dataFlowValue.addSinkData(s);
                            addValue = false;
                            break;
                        }
                    }
                    if (addValue && !exp.toString().contains("new ")) {
                        DataFlowValue dataFlowValue = new DataFlowValue(exp);
                        for (String s: sinkData) dataFlowValue.addSinkData(s);
                        dataFlowValue.setMethod(method);
                        dataFlowValue.setDataTypeAndOperation(dataTypeAndOperation);
                        newValue.add(dataFlowValue);
                    }
                }
            }
        }
        if (node instanceof IdentityStmt){
            List<Pair<Integer,DataFlowValue>> entryTaintValue = context.getEntryValue();
            String at = ((IdentityStmt) node).getRightOp().toString().split(":")[0];
            int index = Integer.parseInt(at.substring(at.length()-1));
            Value lhs = ((IdentityStmt) node).getLeftOp();
            for (DataFlowValue value: taintValue){
                if (value.getData().equals(lhs)){
                    entryTaintValue.add(new Pair<>(index, value));
                    break;
                }
            }
            context.setEntryValue(entryTaintValue);
        }
        if (node instanceof ReturnStmt){
            Value value = updateValue(((ReturnStmt) node).getOp());
            boolean addValue = true;
            for (DataFlowValue dataFlowValue: taintValue){
                if (dataFlowValue.getData().equals(value)){
                    addValue = false;
                    break;
                }
            }
            if (addValue) {
                context.addInitStatment(node.toString());
                DataFlowValue exitTaintValue = context.getExitValue().get(0);
                DataFlowValue dataFlowValue = new DataFlowValue(value);
                for (String s: exitTaintValue.getSinkData()) dataFlowValue.addSinkData(s);
                dataFlowValue.setDataTypeAndOperation(exitTaintValue.getDataTypeAndOperation());
                dataFlowValue.setMethod(exitTaintValue.getMethod());
                newValue.add(dataFlowValue);
            }
        }
        return newValue;
    }


    private List<DataFlowValue> callFlowFunction(Context context, Unit node, List<DataFlowValue> taintValue) {
        InvokeExpr exp = ((Stmt) node).getInvokeExpr();
        SootMethod targetMethod = exp.getMethod();
        Pair<String,String> dataTypeAndOperation = null;
        DataFlowValue olddfv = null;
        Value from = null;
        if (node instanceof InvokeStmt){
            if (exp instanceof SpecialInvokeExpr) from = updateValue(((SpecialInvokeExpr) exp).getBase());
            else if (exp instanceof VirtualInvokeExpr) from = updateValue(((VirtualInvokeExpr) exp).getBase());
        }
        else from = updateValue(((AssignStmt) node).getLeftOp());
        for (DataFlowValue dfv: taintValue){
            if (dfv.getData().equals(from)){
                olddfv = new DataFlowValue(dfv);
                break;
            }
        }
        if (targetMethod.hasActiveBody() && Config.identifyApplicationClass(targetMethod.getDeclaringClass().getName())){
            Pair<SootMethod, Unit> target = new Pair<>(targetMethod, null);
            if (!transitionsAddedMethods.contains(target)){
                String previousPath = context.getPath();
                List<DataFlowValue> exitValue = new ArrayList();
                exitValue.add(olddfv);
                Context targetContext = initContext(targetMethod,exitValue,previousPath + "\t->" + targetMethod + "\n");
                targetContext.setTaintValue(new ArrayList<DataFlowValue>());
                targetContext.setIsCalled(true);
                targetContext.setHasCallee(true);
                transitionsAddedMethods.add(target);
            }
        }
        dataTypeAndOperation = checkDataType(targetMethod);
        if (exp instanceof InstanceInvokeExpr && node instanceof AssignStmt){
            Value instance = updateValue(((InstanceInvokeExpr) exp).getBase());
            boolean addValue = true;
            for (DataFlowValue dfv: taintValue){
               if (dfv.getData().equals(instance)){
                   for (String s: olddfv.getSinkData()) dfv.addSinkData(s);
                   addValue = false;
                   break;
               }
            }
            if (addValue){
                DataFlowValue newdfv = new DataFlowValue(instance);
                for (String s: olddfv.getSinkData()) newdfv.addSinkData(s);
                newdfv.setDataTypeAndOperation(olddfv.getDataTypeAndOperation());
                newdfv.setMethod(olddfv.getMethod());
                taintValue.add(newdfv);
            }
        }
        for (Value oarg : exp.getArgs()) {
            Value arg = updateValue(oarg);
            boolean hasValue = false;
            for (DataFlowValue dfv: taintValue){
               if (dfv.getData().equals(arg)){
                   for (String s: olddfv.getSinkData()) dfv.addSinkData(s);
                   hasValue = true;
                   break;
               }
            }
            if (hasValue) continue;
            DataFlowValue newdfv = new DataFlowValue(arg);
            for (String s: olddfv.getSinkData()) newdfv.addSinkData(s);
            if (dataTypeAndOperation!=null){
                newdfv.setMethod(targetMethod);
                newdfv.setDataTypeAndOperation(dataTypeAndOperation);
            }
            else {
                newdfv.setDataTypeAndOperation(olddfv.getDataTypeAndOperation());
                newdfv.setMethod(olddfv.getMethod());
            }
            taintValue.add(newdfv);
        }
        return taintValue;
    }

    private Context initContext(SootMethod method, List<DataFlowValue> exitValue, String path) {
		Context context = new Context(method, getControlFlowGraph(method), true, path);

		for (Unit unit : context.getControlFlowGraph())
		    context.getWorkList().add(unit);

		context.setExitValue(copy(exitValue));
		context.setEntryValue(new ArrayList<Pair<Integer,DataFlowValue>>());

		if (!contexts.containsKey(method)) {
			contexts.put(method, new LinkedList<Context>());
		}
		contexts.get(method).add(context);

		worklist.add(context);
		return context;

	}

	private DirectedGraph<Unit> getControlFlowGraph(SootMethod method) {
		if (cfgCache.containsKey(method) == false) {
			cfgCache.put(method, new ExceptionalUnitGraph(method.getActiveBody()));
		}
		return cfgCache.get(method);
	}

    private List<DataFlowValue> copy(List<DataFlowValue> src) {
        return new ArrayList<>(src);
    }
}