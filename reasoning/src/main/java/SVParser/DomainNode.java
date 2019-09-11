package SVParser;

public class DomainNode {
    Boolean fuzzy = false;
    String domain_type;
    DicNode pid;

    public DomainNode(){
        pid = new DicNode();
    }

    public Boolean isContained(DomainNode target){
        Boolean result = false;

        if(domain_type.equals(target.domain_type) == false)
            result = false;
        else{
            if(fuzzy)
                result = true;
            else{
                result = pid.isContained(target.pid);
            }
        }

        return result;

    }

    public String toString(){
        return String.format("    [DomainNode] fuzzy: %s, domain_type: %s, pid: %s",
                fuzzy.toString(), domain_type, pid.toString());
    }
}
