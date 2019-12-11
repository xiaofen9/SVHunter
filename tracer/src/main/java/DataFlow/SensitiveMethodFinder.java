package DataFlow;

import com.sun.org.apache.xerces.internal.dom.AttributeMap;
import javafx.util.Pair;
import org.w3c.dom.*;
import org.xml.sax.SAXException;
import soot.*;
import soot.jimple.*;
import soot.tagkit.AnnotationTag;
import soot.tagkit.Tag;
import soot.tagkit.VisibilityAnnotationTag;


import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import java.io.*;
import java.util.*;
import java.util.List;

public class SensitiveMethodFinder {

    static Map<String, ArrayList<String>> Identifications = new HashMap<String, ArrayList<String>>();
    static Map<String, ArrayList<String>> TagIdentifications = new HashMap<String, ArrayList<String>>();

    static List<String> sensitiveMethods = new ArrayList<String>();

    public static void loadIdentifications(String path){
        try {
            DocumentBuilderFactory dbf = DocumentBuilderFactory.newInstance();
            DocumentBuilder db = dbf.newDocumentBuilder();
            Document document = db.parse(path);
            NodeList rules = document.getElementsByTagName("rule");
            NodeList tags = document.getElementsByTagName("tag");

            for (int i = 0; i < rules.getLength(); i++) {
                Element rule = (Element)rules.item(i);
                String className = rule.getElementsByTagName("classname").item(0).getFirstChild().getNodeValue();
                String methodName = rule.getElementsByTagName("methodname").item(0).getFirstChild().getNodeValue();
                String sensitiveJavaPath = String.format("%s#%s", className, methodName);
                Node thenClause = ((AttributeMap)rule.getAttributes()).item(0);

                if(Identifications.containsKey(sensitiveJavaPath)){
                    Identifications.get(sensitiveJavaPath).add(thenClause.getNodeValue());
                } else {
                    ArrayList<String> consequences = new ArrayList<String>();
                    consequences.add(thenClause.getNodeValue());
                    Identifications.put(sensitiveJavaPath, consequences);
                }
            }

            for (int i = 0; i < tags.getLength(); i++) {
                Element tag = (Element)tags.item(i);
                String tagname = tag.getElementsByTagName("tagname").item(0).getFirstChild().getNodeValue();
                Node thenClause = ((AttributeMap)tag.getAttributes()).item(0);

                if(TagIdentifications.containsKey(tagname)){
                    TagIdentifications.get(tagname).add(thenClause.getNodeValue());
                } else {
                    ArrayList<String> consequences = new ArrayList<String>();
                    consequences.add(thenClause.getNodeValue());
                    TagIdentifications.put(tagname, consequences);
                }
            }

        } catch (FileNotFoundException e) {
            System.out.println(e.getMessage());
        } catch (ParserConfigurationException e) {
            System.out.println(e.getMessage());
        } catch (SAXException e) {
            System.out.println(e.getMessage());
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }

    public static List<Pair<String,String>> findSensitiveMethods(Map<SootMethod,List<Pair<SootMethod,Unit>>> calleeToCallerTable){
        List<Pair<String,String>> sensitiveMethodList = new ArrayList<>();

        for (SootClass sc: Scene.v().getClasses(SootClass.BODIES)) {
            //PhantomClass refers to the library class
            if (sc.isPhantomClass()) continue;
            //Make sure we focuses on the application class
            if (Config.identifyApplicationClass(sc.getName())) {
                //Getting all methods of class
                Iterator<SootMethod> methods = sc.getMethods().iterator();
                while (methods.hasNext()) {                    
                    SootMethod caller = null;
                    try {
                        caller = methods.next();
                    } catch (ConcurrentModificationException e){
                        break;
                    }
                    //Abstract class has some methods undefined
                    if (caller.isAbstract()) continue;
                    if (caller.isConcrete()==false) continue;
                    //Getting all Statement of method
                    Body body = null;
                    try {
                        body  = caller.retrieveActiveBody();
                    } catch (RuntimeException e) {
                        body = new JimpleBody(caller);
                        ((JimpleBody) body).insertIdentityStmts();
                        caller.setActiveBody(body);
                    }
    
                    String callerJavaPath = String.format("%s#%s", caller.getDeclaringClass().getName(), caller.getName());

                    if(caller.getTags() != null) ;{
                        for(Tag tag : caller.getTags()){
                            for(String sTag : TagIdentifications.keySet()){
                                if (tag instanceof VisibilityAnnotationTag && tag.toString().contains(sTag)){
                                    Unit unit = null;
                                    for(Unit tmp: body.getUnits()){
                                        if(tmp instanceof ReturnStmt){
                                            unit = tmp;
                                            break;
                                        }
                                    }

                                    if(unit == null)
                                        continue;
                                    for(String thenClause: TagIdentifications.get(sTag)){
                                        int typeIndex = thenClause.indexOf("::");
                                        int operationIndexStart = thenClause.indexOf("->") + 3;
                                        int operationIndexEnd = thenClause.indexOf("$var_") - 1;
                                        String datatype = thenClause.substring(1, typeIndex);
                                        String operation = thenClause.substring(operationIndexStart, operationIndexEnd);
                                        String pid = new String();

                                        DataFlowValue dfv;

                                        dfv = new DataFlowValue(((ReturnStmt) unit).getOp());
                                        dfv.setMethod(caller);
                                        dfv.setDataTypeAndOperation(new Pair<String, String>(datatype, operation));
                                        pid = findPIDForStartPoint(dfv, calleeToCallerTable, caller);

                                        String usageDataType = thenClause.replace("::N/A", "::" + pid);

                                        String sensitiveString = String.format("[%s] %s@{%d-%d}\n", usageDataType, callerJavaPath, unit.getJavaSourceStartLineNumber(), unit.getJavaSourceStartLineNumber());
                                        if(!sensitiveMethods.contains(sensitiveString)){

                                            String targetClass = caller.getDeclaringClass().getName();
                                            String method = String.format("%s@{%d-%d}", caller.getName(), unit.getJavaSourceStartLineNumber(), unit.getJavaSourceStartLineNumber());
                                            sensitiveMethodList.add(new Pair<String, String>(targetClass,method+"@"+usageDataType));
                                            sensitiveMethods.add(sensitiveString);
                                        }
                                    }
                                }
                            }
                        }
                    }
    
                    for (Unit unit:body.getUnits()){
                        //Identify the Statement with invoke exp
                        if (((Stmt) unit).containsInvokeExpr()) {
                            SootMethod callee = null;
							try {
								callee = ((Stmt) unit).getInvokeExpr().getMethod();
							} catch (RuntimeException e) {
								continue;
							}
                            String calleeJavaPath = String.format("%s#%s", callee.getDeclaringClass().getName(), callee.getName());
                            //Ignore the invoke to the system method
                            if (Identifications.containsKey(calleeJavaPath)){
                                for(String thenClause: Identifications.get(calleeJavaPath)){
                                    int typeIndex = thenClause.indexOf("::");
                                    int operationIndexStart = thenClause.indexOf("->") + 3;
                                    int operationIndexEnd = thenClause.indexOf("$var_") - 1;
                                    String datatype = thenClause.substring(1, typeIndex);
                                    String operation = thenClause.substring(operationIndexStart, operationIndexEnd);
                                    String pid = new String();

                                    DataFlowValue dfv;

                                    if (((Stmt) unit).getInvokeExpr().getArgs().size() > 0){
                                        dfv = new DataFlowValue(((Stmt) unit).getInvokeExpr().getArg(0));
                                        dfv.setMethod(callee);
                                        dfv.setDataTypeAndOperation(new Pair<String, String>(datatype, operation));
                                        pid = findPIDForStartPoint(dfv, calleeToCallerTable, caller);
                                    }
                                    else{
                                        pid = caller.getDeclaringClass().getShortName();
                                    }

                                    String usageDataType = thenClause.replace("::N/A", "::" + pid);

                                    String callString = String.format("[%s] %s@{%d-%d}\n", usageDataType, callerJavaPath, unit.getJavaSourceStartLineNumber(), unit.getJavaSourceStartLineNumber());
                                    if(!sensitiveMethods.contains(callString)){
                                        String targetClass = caller.getDeclaringClass().getName();
                                        String method = String.format("%s@{%d-%d}", caller.getName(), unit.getJavaSourceStartLineNumber(), unit.getJavaSourceStartLineNumber());
                                        sensitiveMethodList.add(new Pair<String, String>(targetClass,method+"@"+usageDataType));

                                        sensitiveMethods.add(callString);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return sensitiveMethodList;
    }

    public static String findPIDForStartPoint(DataFlowValue dataFlowValue, Map<SootMethod,List<Pair<SootMethod,Unit>>> calleeToCallerTable, SootMethod envMethod) {
        SootMethod curMethod = dataFlowValue.getMethod();
        SootClass methodClass = curMethod.getDeclaringClass();
        String pid = "";
        Value value = dataFlowValue.getData();

        if (dataFlowValue.getDataTypeAndOperation().getKey().equals("net_state")) {
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
                if (pid.length() > 0) {
                    pid = pid.replace("/", ".");
                    pid = pid.replaceAll("\\.\\.", ".");
                    pid = pid.replaceAll("\\.\\.", ".");
                    pid = pid.replaceAll("\\.\\.", ".");
                    pid = pid.replaceAll("\\.\\.", ".");
                } else {
                    dataFlowValue.setDataTypeAndOperation(null);
                    pid = curMethod.getName();
                }
            } else if (Config.baseControllerType.equals("floodlight")) {
                List<Pair<SootMethod, Unit>> callermethod = calleeToCallerTable.get(envMethod);
                if (callermethod != null && callermethod.size() > 0 && calleeToCallerTable.get(envMethod).get(0).getKey().getName().equals("getRestlet")) {
                    SootClass callerClass = calleeToCallerTable.get(envMethod).get(0).getKey().getDeclaringClass();
                    pid = ((StringConstant) ((Stmt) callermethod.get(0).getValue()).getInvokeExpr().getArg(0)).value;

                    for (Unit unit : callerClass.getMethodByName("basePath").getActiveBody().getUnits()) {
                        if (unit instanceof ReturnStmt) {
                            pid = ((StringConstant) ((ReturnStmt) unit).getOp()).value + pid;
                            break;
                        }
                    }
                    if (pid.startsWith("/")) pid = "root" + pid;
                    if (pid.endsWith("/")) pid = pid.substring(0, pid.length() - 1);
                    pid = pid.replace("/", ".");
                    pid = pid.replace("\"", "");

                } else {
                    pid = envMethod.getDeclaringClass().getShortName();
                }
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
            if(Config.baseControllerType.equals("onos") && curMethod.getName().equals("getDevices")) pid = "OFFeatureReply";
            if(Config.baseControllerType.equals("floodlight") && curMethod.getName().equals("getSwitchFeaturesReply")) pid = "OFFeatureReply";
            if (pid.length()==0) pid = methodClass.getShortName().split("\\$")[0];
        }
        else if (dataFlowValue.getDataTypeAndOperation().getKey().equals("db")) pid = value.toString().replace("\"", "");
        else if (dataFlowValue.getDataTypeAndOperation().getKey().equals("fs")) {
            pid = value.toString();
            if (pid.length()==0) dataFlowValue.setDataTypeAndOperation(null);
            else if (pid.startsWith(".")) dataFlowValue.setDataTypeAndOperation(null);
            else if (!(value instanceof StringConstant)) dataFlowValue.setDataTypeAndOperation(null);
            else {
                pid = pid.replace("\"","");
                pid = pid.replace("/",".");
                if (pid.endsWith(".")) dataFlowValue.setDataTypeAndOperation(null);
            }

        } else assert false;

        if (pid.length() > 4 && pid.endsWith("."))
            pid = pid.substring(0, pid.length()-1);

        pid = pid.replace(" ", "");
        pid = pid.replace("*", "");
        pid = pid.replace(":", "");
        pid = pid.replace("?","");

        return pid;
    }

}
