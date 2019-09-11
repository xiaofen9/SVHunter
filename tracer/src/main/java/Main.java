import DataFlow.SensitiveMethodFinder;
import javafx.util.Pair;
import soot.*;
import soot.jimple.AssignStmt;
import soot.jimple.ClassConstant;
import soot.jimple.JimpleBody;
import soot.jimple.Stmt;
import soot.jimple.internal.JInstanceFieldRef;
import soot.options.Options;
import soot.tagkit.Tag;
import soot.tagkit.VisibilityAnnotationTag;
import org.json.simple.JSONArray;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;
import org.json.simple.parser.ParseException;
import DataFlow.Config;
import DataFlow.DataFlowTransformer;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import java.io.*;
import java.util.*;
import java.util.List;

import org.w3c.dom.*;
import org.xml.sax.SAXException;

public class Main {

    public static void addClass(File file, ArrayList<String> l){
        File[] fs = file.listFiles();
        for (File f:fs){
            if (f.isDirectory()){
                if (Config.identifyStart(f.getName())) {
                    l.add("-process-dir");
                    l.add(file.getAbsolutePath());
                    return;
                }
                else addClass(f,l);
            }
        }
    }

    public static void addComponent(File file, ArrayList<String> l, ArrayList<String> componentList) {
        File[] fs = file.listFiles();
        for (File f : fs) {
            if (f.isDirectory())
                addComponent(f, l,componentList);
            if (f.isFile() && f.getName().endsWith(".jar")) {
                String component = f.getPath().split("/")[3];
                if (!componentList.contains(component)) continue;
                l.add("-process-dir");
                l.add(f.getAbsolutePath());
            }
        }
    }
    public static void loadClass(File file){
        File[] fs = file.listFiles();
        for (File f:fs){
            if (f.isDirectory()) loadClass(f);
            if (f.isFile() && f.getName().endsWith(".class")){
                String[] names = file.getAbsolutePath().split("/");
                String classname = "";
                int pos = names.length;
                while (pos > 0){
                    pos -= 1;
                    classname = names[pos] + "." + classname;
                    if (Config.identifyStart(names[pos])) break;
                }
                if (Config.identifyApplicationClass(classname)) {
                    classname = classname + f.getName();
                    classname = classname.substring(0, classname.length() - 6);
                    SootClass sc = Scene.v().loadClass(classname, SootClass.BODIES);
                    sc.setApplicationClass();
                }
            }
        }
    }


    public static ArrayList<String> extractJSONInfo(JSONObject jsonObject, String jsonIdx) {
        Iterator<String> iterator = ((JSONArray) jsonObject.get(jsonIdx)).iterator();
        ArrayList<String> configArray = new ArrayList<>();
        while (iterator.hasNext()) configArray.add(iterator.next());
        return configArray;
    }

    public static void main(String args[]) throws IOException {
        long startTime = System.nanoTime();
        ArrayList<String> sootArgs = new ArrayList<String>(
                Arrays.asList(
                        "-w", "-app",
                        "-keep-line-number",
                        "-keep-bytecode-offset",
                        "-no-bodies-for-excluded",
                        "-allow-phantom-refs",
                        "-src-prec", "only-class",
                        "-p", "cg", "implicit-entry:false",
                        "-p", "cg.spark", "enabled",
                        "-p", "cg.spark", "simulate-natives",
                        "-p", "cg", "safe-forname",
                        "-p", "cg", "safe-newinstance",
                        "-f", "none")
        );
        JSONParser parser = new JSONParser();
        ArrayList<String> componentList = new ArrayList<>();
        boolean partialTrace = false;
        try {
            Config.rootPath = args[0];
            JSONObject jsonObject = (JSONObject) parser.parse(new FileReader(args[1]));

            Config.sensitiveMethodList = args[2];
            Config.DFMethodList = args[3];

            Config.baseControllerType = (String) jsonObject.get("baseControllerType");
            Config.applicationClassPrefix.addAll(extractJSONInfo(jsonObject, "applicationClassPrefix"));
            Config.classDrivenDataType.addAll(extractJSONInfo(jsonObject, "classDrivenDataType"));
            Config.middleMethodDrivenDataType.addAll(extractJSONInfo(jsonObject, "middleMethodDrivenDataType"));
            Config.endMethodDrivenDataType.addAll(extractJSONInfo(jsonObject, "endMethodDrivenDataType"));
            Config.returnTypeDrivenDataType.addAll(extractJSONInfo(jsonObject, "returnTypeDrivenDataType"));
            Config.valueTypeDrivenDataType.addAll(extractJSONInfo(jsonObject, "valueTypeDrivenDataType"));
            Config.skippedDataType.addAll(extractJSONInfo(jsonObject, "skippedDataType"));
            Config.skippedIdentity.addAll(extractJSONInfo(jsonObject, "skippedIdentity"));

            Iterator<String> iterator = ((JSONArray) jsonObject.get("components")).iterator();
            while (iterator.hasNext()){
                componentList.add(iterator.next());
            }
            partialTrace = (boolean) jsonObject.get("partialTrace");

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        } catch (ParseException e) {
            e.printStackTrace();
        }

        /*--------------------Load Whole Project----------------------*/
        File file = new File(Config.rootPath);


        if (partialTrace) addComponent(file,sootArgs,componentList);
        else addClass(file,sootArgs);
        Options.v().parse(sootArgs.toArray(new String[0]));
        loadClass(file);
        Scene.v().loadNecessaryClasses();

        Map<String,Pair<String,String>> normalDFMethodList = new HashMap<>();
        Map<String,Pair<String,String>> specialDFMethodList = new HashMap<>();

        try {
            DocumentBuilderFactory dbf = DocumentBuilderFactory.newInstance();
            DocumentBuilder db = dbf.newDocumentBuilder();
            Document document = db.parse(Config.DFMethodList);
            NodeList specials = document.getElementsByTagName("special");
            NodeList normals = document.getElementsByTagName("normal");

            for (int i = 0; i < specials.getLength(); i++) {
                Element special = (Element)specials.item(i);
                String datatype = special.getElementsByTagName("datatype").item(0).getFirstChild().getNodeValue();
                String mark = special.getElementsByTagName("mark").item(0).getFirstChild().getNodeValue();
                String operation = special.getElementsByTagName("operation").item(0).getFirstChild().getNodeValue();
                specialDFMethodList.put(mark, new Pair<String, String>(datatype, operation));
            }

            for (int i = 0; i < normals.getLength(); i++) {
                Element normal = (Element)normals.item(i);
                String datatype = normal.getElementsByTagName("datatype").item(0).getFirstChild().getNodeValue();
                String className = normal.getElementsByTagName("class").item(0).getFirstChild().getNodeValue();
                String methodName = normal.getElementsByTagName("method").item(0).getFirstChild().getNodeValue();
                String mark = className + " " + methodName;
                String operation = normal.getElementsByTagName("operation").item(0).getFirstChild().getNodeValue();
                normalDFMethodList.put(mark, new Pair<String, String>(datatype, operation));
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

        /*--------------------Initialize the calleeToCallerTable---------------------*/

        Map<SootMethod,List<Pair<SootMethod,Unit>>> calleeToCallerTable = new HashMap<>();
        Map<Value,List<Pair<SootMethod,Unit>>> fieldVariableTable = new HashMap<>();
        //Getting all classes of project
        for (SootClass sc: Scene.v().getClasses(SootClass.BODIES)){
            //PhantomClass refers to the library class
            if (sc.isPhantomClass()) continue;
            //Make sure we focuse on the application class
            if (Config.identifyApplicationClass(sc.getName())){
                //Getting all methods of class
                Iterator<SootMethod> methods = sc.getMethods().iterator();
                while (methods.hasNext()){
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

                    for (Unit unit:body.getUnits()){
                        //Identify the Statement with invoke exp
                       if (((Stmt) unit).containsInvokeExpr()) {
                           SootMethod callee = ((Stmt) unit).getInvokeExpr().getMethod();
                           //Ignore the invoke to the system method
                           if (Config.identifyApplicationClass(callee.getDeclaringClass().getName())) {
                               if (calleeToCallerTable.containsKey(callee) == false)
                                   calleeToCallerTable.put(callee, new ArrayList<Pair<SootMethod, Unit>>());
                               calleeToCallerTable.get(callee).add(new Pair<SootMethod, Unit>(caller, unit));
                           }
                           if (Config.baseControllerType.equals("floodlight") && sc.getShortName().contains("Routable") &&
                                   caller.getName().equals("getRestlet") && callee.getName().equals("attach")) {
                               Value value = ((Stmt) unit).getInvokeExpr().getArg(1);
                               if (value instanceof ClassConstant == false) continue;
                               String className = ((ClassConstant) value).getValue();
                               className = className.substring(1, className.length() - 1).replace("/", ".");
                               SootClass targetClass = Scene.v().getSootClass(className);
                               for (SootMethod sootMethod : targetClass.getMethods()) {
                                   if (sootMethod.getTags() == null) continue;
                                   for (Tag tag : sootMethod.getTags()) {
                                       if (tag instanceof VisibilityAnnotationTag && tag.toString().contains("Lorg/restlet/resource/Get")) {
                                           if (calleeToCallerTable.containsKey(sootMethod) == false)
                                               calleeToCallerTable.put(sootMethod, new ArrayList<Pair<SootMethod, Unit>>());
                                           calleeToCallerTable.get(sootMethod).add(new Pair<SootMethod, Unit>(caller, unit));
                                           break;
                                       }
                                   }
                               }
                           }

                       }
                       if ( unit instanceof AssignStmt){
                           Value value = ((AssignStmt) unit).getLeftOp();
                           if (value instanceof JInstanceFieldRef) {
                              if (fieldVariableTable.containsKey(value) == false)
                                  fieldVariableTable.put(value, new ArrayList<Pair<SootMethod, Unit>>());
                              fieldVariableTable.get(value).add(new Pair<>(caller,unit));
                           }
                       }
                   }
                }
            }
        }

        SensitiveMethodFinder.loadIdentifications(Config.sensitiveMethodList);
        List<Pair<String,String>> sensitiveMethodList = SensitiveMethodFinder.findSensitiveMethods(calleeToCallerTable);

        /* ------------------- ANALYSIS ---------------------- */


        DataFlowTransformer dft = new DataFlowTransformer(calleeToCallerTable, fieldVariableTable, sensitiveMethodList, normalDFMethodList, specialDFMethodList);
        PackManager.v().getPack("wjtp").add(new Transform("wjtp.fcpa", dft));

        soot.Main.main(sootArgs.toArray(new String[0]));


        /* -------------------------END-------------------------*/
        long endTime = System.nanoTime();
        long totalTime = endTime - startTime;
        System.out.println("Tracer has run for " + totalTime / 1000000000 / 60 + " min " + totalTime / 1000000000 % 60 + " sec.");
        System.out.println("Number of explored flows: " + dft.totalPRIA);
        System.out.println("Number of Sensitive Methods: " + sensitiveMethodList.size());

    }

}