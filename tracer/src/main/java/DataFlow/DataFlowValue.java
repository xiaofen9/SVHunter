package DataFlow;

import javafx.util.Pair;
import soot.SootMethod;
import soot.Value;

import java.util.HashSet;
import java.util.Set;

public class DataFlowValue {
    private Value data;
    private Set<String> sinkData;
    private SootMethod method = null;
    private Pair<String, String> dataTypeAndOperation = null;

    public DataFlowValue(Value data){
        this.data = data;
        this.sinkData = new HashSet<>();
    }

    public DataFlowValue(DataFlowValue that){
        this.data = that.data;
        this.sinkData = that.sinkData;
        this.method = that.method;
        this.dataTypeAndOperation = that.dataTypeAndOperation;
    }

    public void addSinkData(String initValue){
        this.sinkData.add(initValue);
    }

    public Value getData() {
        return data;
    }

    public Set<String> getSinkData() {
        return sinkData;
    }

    public SootMethod getMethod() {
        return method;
    }

    public void setMethod(SootMethod method) {
        this.method = method;
    }

    public Pair<String, String> getDataTypeAndOperation() {
        return dataTypeAndOperation;
    }

    public void setDataTypeAndOperation(Pair<String, String> dataTypeAndOperation) {
        this.dataTypeAndOperation = dataTypeAndOperation;
    }

}
