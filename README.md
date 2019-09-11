# SVHunter

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](LICENSE)

Code for the IEEE S&P 2020 paper 'Unexpected Data Dependency Creation and Chaining: A New Attack to SDN'


## Introduction

`SVHunter` is a novel tool that pinpoints a wide range of sensitive methods in SDN controller and create data dependencies to attack these methods. It currently supports three mainstream SDN controllers (`ONOS` [tested on 1.13.1], `OpenDaylight` [tested on Oxygen], `Floodlight` [tested on 1.2]).

`SVHunter` consists of three components: [Tracer](tracer), [Reasoning Engine](reasoning) and [Exploit Engine](exploit).


## Build & Usage

For more instructions about build and usage of the each module. Please refer to [Tracer](tracer), [Reasoning Engine](reasoning) and [Exploit Engine](exploit/injector).

     
