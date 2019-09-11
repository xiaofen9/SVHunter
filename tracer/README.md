# SVHunter-Tracer

## Introduction

This module is designed to 
1. Load the whole SDN project
2. Process the backward data flow analysis 
3. Extract the poisoned events from traced data flow
4. Output the results for Reasoning module

## Build

### Requirements

You can build `SVHunter-Tracer` either using Apche Maven or with IntelliJ IDE.  
The required utilities and dependencies are as followed:  
(Version numbers indicate the versions that we use in our development.)  

Name|Version
----|------
JDK |1.8.0 
Apache Maven| 3.6.0  
Soot |3.0.0
JUnit |4.12
JSON.simple | 1.1

We recommend to use the utilities distributed with 64-bit Ubuntu 16.04.2. 
The Apache Maven can be obtained through [maven](https://maven.apache.org).

### Building The Tool With Command Line

To build `SVHunter-Tracer`, run the command below at the `tracer` folder.

    mvn package -f .

### Building The Tool With IntelliJ

We developed `SVHunter-Tracer` using the IntelliJ IDE. When you import the whole module into the IntelliJ IDE, it will appear as Maven projects which can be directly built and run through the IntelliJ IDE.

## Usage

To use `SVHunter-Tracer`, run the command below at the `tracer` folder.

	java -jar ./target/SVHunter-Tracer-0.1-SNAPSHOT-jar-with-dependencies.jar <path_to_project> <path_to_environment_config_file> <path_to_sensitive_method_list> <path_to_DFMethod_list>

Note that the order of the config file matters and the samples of config files can all be found in the `tracer/config` directory. Finally, the result of this module will be found out under the `tracer` folder named `backwardFlow`.




