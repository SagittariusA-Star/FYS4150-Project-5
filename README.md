# FYS4150-Project-5

## Overview

* This repository contains source code as well as the report for the project titled "*Building a model for the solar system using ordinary differential equations*" in the course FYS4150 teached at the University of Oslo autumn 2019. Link to project description can be found [here](http://compphysics.github.io/ComputationalPhysics/doc/Projects/2019/Project5/SolarSystem/html/SolarSystem.html). 

* The goal of this project is to create an N-body simulator to solve the motion of the celestial bodies in the solar system using newtons gravitational law.

* The source code producing the results can be found in the /src folder while the documents and figures related to the final report can be found in the /doc folder.

## Build instructions
* Run mains_script.sh to run tests and genererate figures and results presented in the report. This will also ask if you want to build the report using LaTeX. The plots are generated using the Matplotlib Python libary using Python > 3.6.

* Individual results can be calculated by compiling and running their respective main file named "outputtaskx.cpp", where x represents the task number. The figures can be generated equivalently by running "plot_taskx.py".

## Structure
* The calculations are done using the Nbody class contained in Nbody.cpp which depends on SolarSystem.cpp and CelstialBody.cpp.
* src/ contains all source code to generate figures and results.
* src/datafiles contains all datafiles giving inital conditions to the system when producing results for the tasks given.
* src/datafiles/filestaskx contains the calculated results for the respective task as either .txt or .bin depending on argument given to the program.
* doc/ contains all files related to the report.
* doc/figures contains all figures generated by the python scripts.
