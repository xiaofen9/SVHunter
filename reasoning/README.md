# SVHunter-Reasoning
## Introduction
This module is designed to 
1. transform the results of tracer into observations
2. connect all the observation nodes as defined in XXX language
3. output paths start from a malicious device and end with the most destructive attack effects as they can

## Build
### Requirements
Name|Version
----|------
JDK |1.8.0 or higher
ANTLR 4 |4.7.1 or higher
Graphviz | 2.38

### Build with IntellJ
1. Load the project into IntellJ
2. Make sure antlr-4.7.1-complete.jar(or higher version) has been added as a library
3. Build Project

## Usage
1. Find src/main/java/Run.main.
2. If backwardFlow has been generated in the root path of SVHunter, run the main method. If not, generate backwardFlow.txt by tracer or other tools
3. Get the result in results folder.
4. Use `dot -Tpdf results/output.dot -o results/output.pdf` to generate a graph based on the result.
