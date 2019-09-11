package DataFlow;

import javafx.util.Pair;
import soot.*;
import java.util.*;

public class DataFlowTransformer extends SceneTransformer {

	private DataFlowAnalysis analysis;

	private Map<SootMethod,List<Pair<SootMethod,Unit>>> calleeToCallerTable;
	private List<Pair<String,String>> sensitiveMethodList;
	private Map<String, Pair<String,String>> normalDFMethodList;
	private Map<String, Pair<String,String>> specialDFMethodList;
	private Map<Value,List<Pair<SootMethod,Unit>>> fieldVariableTable;

	public int totalPRIA = 0;
	public int totalMRIA = 0;
	public int totalRIA = 0;

	public DataFlowTransformer(Map<SootMethod,List<Pair<SootMethod,Unit>>> calleeToCallerTable, Map<Value,List<Pair<SootMethod,Unit>>> fieldVariableTable,
							   List<Pair<String,String>> sensitiveMethodList, Map<String, Pair<String,String>> normalDFMethodList,
							   Map<String, Pair<String,String>> specialDFMethodList){
		super();
		this.calleeToCallerTable = calleeToCallerTable;
		this.sensitiveMethodList = sensitiveMethodList;
		this.normalDFMethodList = normalDFMethodList;
		this.specialDFMethodList = specialDFMethodList;
		this.fieldVariableTable = fieldVariableTable;
	}

	@Override
	protected void internalTransform(String arg0, @SuppressWarnings("rawtypes") Map arg1) {
		analysis = new DataFlowAnalysis(calleeToCallerTable, fieldVariableTable, sensitiveMethodList, normalDFMethodList, specialDFMethodList);
		analysis.doAnalysis();
		totalPRIA = analysis.totalPRIA;
		totalMRIA = analysis.totalMRIA;
		totalRIA = analysis.totalRIA;
	}
}
