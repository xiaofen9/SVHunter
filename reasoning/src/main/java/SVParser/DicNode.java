package SVParser;

import java.util.ArrayList;
import java.util.List;

public class DicNode {

    Boolean notFlag = false;
    List<String> path = null;

    public DicNode(){
        path = new ArrayList<String>();
    }

    public Boolean isContained(DicNode target){
        Boolean result = false;
        Boolean abcontained = false;
        String curPath = getPathString();
        String targetPath = target.getPathString();

        if(targetPath.contains(curPath) || curPath.equals(".")){
            abcontained = true;
        } else {
            abcontained = false;
        }

        if(notFlag){
            result = !abcontained;
        } else {
            result = abcontained;
        }

        if(target.notFlag){
            result = !result;
        } else {
            result = result;
        }

        return result;
    }

    public String getPathString(){
        String spath = "";

        if(path == null || path.size() == 0){
            spath = "";
        } else {
            if(path.get(0) == "." && path.size() == 1){
                spath = ".";
            } else {
                spath = path.get(0);
                for(int i = 1; i < path.size(); i++){
                    spath = spath.concat(".").concat(path.get(i));
                }
            }
        }

        if(spath.contains("$var_"))
            spath = "var";

        return spath;
    }

    public String toString(){
        String spath = getPathString();

        return String.format("[DicNode] notFlag: %s, path: %s.",
                notFlag.toString(), spath);

    }

}
