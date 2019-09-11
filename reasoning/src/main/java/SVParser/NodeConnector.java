package SVParser;

import java.io.*;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class NodeConnector {
    List<ObsrNode> nodes = null;
    List<DangerousNode> dnodes = null;
    List<Integer> printedNode = null;

    String originText;
    String[] obsrs;

    Map<String, String> pidtoProto = new HashMap<String, String>();

    Boolean ext = true;

    public NodeConnector(List<ObsrNode> nodeList, String origin){
        nodes = nodeList;
        dnodes = new ArrayList<DangerousNode>();
        printedNode = new ArrayList<Integer>();

        originText = origin;
        obsrs = originText.split("\n");
    }

    public void loadMap(){
        File f = new File("./reasoning/MapFromPIDToProtocol.txt");

        try{
            BufferedReader br = new BufferedReader(new FileReader(f));
            String mapInfo;

            while ((mapInfo = br.readLine()) != null) {
                if(mapInfo.trim().length() < 3){
                    continue;
                }

                String keyInfo = mapInfo.split("->")[0].trim();
                String valueInfo = mapInfo.split("->")[1].trim();

                pidtoProto.put(keyInfo, valueInfo);
            }
        } catch (FileNotFoundException e){
            e.printStackTrace();
        } catch (IOException e){
            e.printStackTrace();
        }


    }

    public void doConnect(){
        System.out.print("Successfully resolving the input.\r\n Start connecting...\r\n");
        loadMap();

        // Construct Dangerous nodes list for all ObsrNode
        for(int i = 0; i < nodes.size(); i++){
            DangerousNode dnode = new DangerousNode(nodes.get(i));

            dnodes.add(dnode);
        }

        // check if each 2 nodes can be connected
        for(int i = 0; i < dnodes.size(); i++){
            for(int j = 0; j < dnodes.size(); j++){
                // Ignore self-connections
                if(i == j)
                    continue;

                // If i is predecessor of j
                if(dnodes.get(i).content.isPredecessorOf(dnodes.get(j).content, false)){
                    if(dnodes.get(i).content.consequence.get(0).domain.domain_type.equals(dnodes.get(j).content.consequence.get(0).domain.domain_type)
                            && dnodes.get(i).content.consequence.get(0).domain.pid.getPathString().equals(dnodes.get(j).content.consequence.get(0).domain.pid.getPathString()))
                        continue;

                    ObsrNode ni = dnodes.get(i).content;
                    ObsrNode nj = dnodes.get(j).content;

                    if(nj.consequence.get(0).domain.isContained(ni.consequence.get(0).domain) || nj.preCondition.get(0).domain.pid.getPathString().length() == 9){
                        dnodes.get(i).addNextNode(dnodes.get(j));
                        dnodes.get(j).addPreNode(dnodes.get(i));
                    }
                }
            }
        }

        output();
        System.out.println("Done.");

        return;
    }

    public void output(){
        try{ 
	    
	    File msgInfoFile = new File("results/");
            msgInfoFile.mkdir();

            // Create path file
            File pathFile = new File("results/path.txt");
            pathFile.createNewFile();

            // Create FileWriter for each file
            FileWriter pathFileWriter = new FileWriter("results/path.txt");

            // Initial path List
            ArrayList<ObsrNode> path = new ArrayList<ObsrNode>();

            int cnt = 0;
            for(int i = 0; i < dnodes.size(); i++){
                String nodeDesc = String.format("  node%d [label=\"{<f0> %s|<f1> pid:%s\\nvar:var#%d}\" shape=Mrecord];\n",
                        cnt, dnodes.get(i).content.preCondition.get(0).domain.domain_type, dnodes.get(i).content.preCondition.get(0).domain.pid.getPathString().replaceAll("\\{|\\}", ""), cnt);

                cnt++;
            }

            // Traverse the dangerous node list to find connections(for output.dot) and paths(for path.txt)
            for(int i = 0; i < dnodes.size(); i++){
                // node i is the first node of current path
                path.add(dnodes.get(i).content);

                // if node i does have next nodes && node i has not been printed
                if(dnodes.get(i).nextNode.size() > 0 && !printedNode.contains(i)){
                    // if ((ext is enabled && the stage of node i is toe stage) || ext is disabled)
                    if(!ext || dnodes.get(i).stage.equals("toe")) {
                        // mark node i as a printed node
                        printedNode.add(i);

                        // Traverse the next node list of node i
                        for (int j = 0; j < dnodes.get(i).nextNode.size(); j++) {
                            // Get next node for recursive call
                            DangerousNode nextNode = dnodes.get(i).nextNode.get(j);
                            // Add next node to path list
                            path.add(nextNode.content);

                            // Call output(x, x, x, path) to get complete paths for node i
                            output(dnodes.get(i).nextNode.get(j), pathFileWriter, 1, path);

                            // Remove next node from current path
                            path.remove(nextNode.content);
                        }
                        //break;
                    }
                // if current node is a crash node
                } else if(dnodes.get(i).content.consequence.get(0).primitive.op_type == 3){
                    // mark node i as a printed node
                    printedNode.add(i);

                    pathFileWriter.write(path.toString() + "\n");
                }
                // Complete the traversing for node i. Remove it from current path
                path.remove(dnodes.get(i).content);
            }

            pathFileWriter.close();
        } catch (IOException e){
            e.printStackTrace();
        }
    }


    public void output(DangerousNode dnode, FileWriter fw, int cnt, ArrayList<ObsrNode> path){
        try{
            // Flag is to check whether node dnode is the last node in the path
            Boolean flag = true;

            if((ext && dnode.stage.equals("final")) || dnode.nextNode.size() == 0) {
                fw.write(path.toString() + "\n");
                //System.out.print(path.toString() + "\n");

                return;
            } else{
                for(int j = 0; j < dnode.nextNode.size(); j++) {
                    DangerousNode nextNode = dnode.nextNode.get(j);

                    // check if nextNode has been included in current path to avoid recursive loops
                    if (!path.contains(nextNode.content)) {
                        path.add(nextNode.content);
                        output(nextNode, fw, cnt + 1, path);
                        path.remove(nextNode.content);
                        flag = false;
                    }
                }
                if(flag){
                    //System.out.print(path.toString() + "\n");
                    fw.write(path.toString() + "\n");
                }

                return;
            }
        } catch(IOException e){
            e.printStackTrace();
        }
    }

}
