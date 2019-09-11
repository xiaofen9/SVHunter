package DataFlow;

import java.util.ArrayList;

public class Config {
    public static String baseControllerType = "";

    public static String rootPath = "";

    public static ArrayList<String> applicationClassPrefix = new ArrayList<>();

    public static String sensitiveMethodList = "";

    public static String DFMethodList = "";



    public static ArrayList<String> skippedDataType = new ArrayList<>();

    public static ArrayList<String> skippedIdentity = new ArrayList<>();

    public static ArrayList<String> middleMethodDrivenDataType = new ArrayList<>();

    public static ArrayList<String> endMethodDrivenDataType = new ArrayList<>();

    public static ArrayList<String> classDrivenDataType = new ArrayList<>();

    public static ArrayList<String> valueTypeDrivenDataType = new ArrayList<>();

    public static ArrayList<String> returnTypeDrivenDataType = new ArrayList<>();


    public static boolean identifyStart(String packageName) {
        for (String name : applicationClassPrefix) {
            if (name.startsWith(packageName)) return true;
        }
        return false;
    }

    public static boolean identifyApplicationClass(String className){
        if (className.contains("Test") || className.contains("test")) return false;
        if (className.contains("Fake") || className.contains("fake")) return false;
        for (String prefix : applicationClassPrefix) {
            if (className.contains(prefix)) return true;
        }
        return false;
    }

}
