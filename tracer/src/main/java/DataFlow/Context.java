package DataFlow;

import java.util.*;

import javafx.util.Pair;
import soot.SootMethod;
import soot.Unit;
import soot.toolkits.graph.DirectedGraph;
import soot.toolkits.graph.SlowPseudoTopologicalOrderer;



public class Context implements soot.Context, Comparable<Context>{

	private static int count = 0;

	private DirectedGraph<Unit> controlFlowGraph;
	private List<Pair<Integer, DataFlowValue>> entryValue;
	private List<DataFlowValue> exitValue;
	private int id;
	private String path;
	private SootMethod method;
	private NavigableSet<Unit> workList;
	private List<DataFlowValue> taintValue;

	private boolean hasCallee = false;
	private boolean isCalled = false;
	private List<String> initStatment = new ArrayList<>();


	public boolean isHasCallee() {
		return hasCallee;
	}

	public void setHasCallee(boolean hasCallee) {
		this.hasCallee = hasCallee;
	}

	public List<String> getInitStatment() {
		return initStatment;
	}

	public void addInitStatment(String initStatment){
		this.initStatment.add(initStatment);
	}

	public boolean isIsCalled() {
		return isCalled;
	}

	public void setIsCalled(boolean isCalled) {
		this.isCalled = isCalled;
	}

	public Context(SootMethod method, DirectedGraph<Unit> cfg, boolean reverse, String path) {
		count++;
		this.id = count;

		this.method = method;
		this.controlFlowGraph = cfg;
		this.path = path;

		List<Unit> orderedNodes = new SlowPseudoTopologicalOrderer().newList(controlFlowGraph, reverse);
		final Map<Unit,Integer> numbers = new HashMap<Unit,Integer>();
		int num = 1;
		for (Unit N : orderedNodes) {
			numbers.put(N, num);
			num++;
		}

		numbers.put(null, Integer.MAX_VALUE);
		this.workList = new TreeSet<Unit>(new Comparator<Unit>() {
			@Override
			public int compare(Unit u, Unit v) {
				return numbers.get(u) - numbers.get(v);
			}
		});

	}

	public DirectedGraph<Unit> getControlFlowGraph() {
		return controlFlowGraph;
	}
	
	public static int getCount() {
		return count;
	}

	public List<Pair<Integer,DataFlowValue>> getEntryValue() {
		return entryValue;
	}

	public List<DataFlowValue> getExitValue() {
		return exitValue;
	}

	public List<DataFlowValue> getTaintValue() { return taintValue;}

	public void setTaintValue(List<DataFlowValue> taintValue) {this.taintValue = taintValue;}

	public String getPath() { return  path; }

	public int getId() {
		return id;
	}

	public SootMethod getMethod() {
		return method;
	}

	public NavigableSet<Unit> getWorkList() {
		return workList;
	}

	public void setEntryValue(List<Pair<Integer,DataFlowValue>> entryValue) {
		this.entryValue = entryValue;
	}

	public void setExitValue(List<DataFlowValue> exitValue) {
		this.exitValue = exitValue;
	}

	@Override
	public String toString() {
		return Integer.toString(id);
	}

	@Override
	public int compareTo(Context o) {
		return this.getId() - o.getId();
	}
}
