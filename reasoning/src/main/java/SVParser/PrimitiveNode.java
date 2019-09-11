package SVParser;

public class PrimitiveNode {


    Integer op_type;  // 0-READ 1-WRITE 2-EXEC 3-CRASH 4-WEB
    String var_name;

    Integer code_line;

    public PrimitiveNode(){

    }

    public Boolean isMatched(PrimitiveNode target){
        if(this.op_type == 1 && target.op_type == 0)
            return true;
        else if (this.op_type == 0 && target.op_type == 0)
            return true;
        else if (this.op_type == 1 && target.op_type == 1)
            return true;
        else if (this.op_type == 2 && target.op_type == 2)
            return true;
        else if (this.op_type == 4 && target.op_type == 4)
            return true;
        else
            return false;
    }

    public String toString(){
        return String.format("    [PrimitiveNode] op_type: %d, var_name: %s.", op_type, var_name);
    }
}
