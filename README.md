# embedded_systems_project_256889 - Hemanth A

## Heat Control System 

### Theory

The heat control system is basically used to control the temperature of a car seat. When a user or driver of the car gets seated on a car, the button sensor gets activated. After that, the user gets access to turn on the heater. The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the control system are done on a microcontroller called Atmega328.

### Simulation

The functionality of the heat control system is coded in embedded c and the working is demonstrated using simuation in a software called SimulIDE.
Below shows two images where in the 1st image shows the status of the simulation when the system is OFF and the second image shows the status of the system when it is ON. 

#### ON
![ON](https://github.com/hemanthasapu/embedded_systems_project_256889/blob/main/simulation/Simulation.gif)

#### OFF
![OFF](https://github.com/hemanthasapu/embedded_systems_project_256889/blob/main/simulation/Simulation_OFF.PNG)

#### Outputs

|Circuit|RAM Table|
|:--:|:--:|
|![CIRCUIT](https://github.com/hemanthasapu/embedded_systems_project_256889/blob/main/simulation/Circuit.gif)|![RAM_TABLE](https://github.com/hemanthasapu/embedded_systems_project_256889/blob/main/simulation/RAM_table.gif)|
|CRO|Serial Monitor|
|![CRO](https://github.com/hemanthasapu/embedded_systems_project_256889/blob/main/simulation/Oscilloscope.gif)|![ON](https://github.com/hemanthasapu/embedded_systems_project_256889/blob/main/simulation/Serial_Monitor.gif)|

### Functionality 

* When the two switches are closed, the first LED glows indicating the actuation of the system and the heater.
* Next the analog input from the temperature sensor is received and digitized.
* The digitized temperature input is visualized using Pulse Width Modulation.
* The corresponding temperature values based on the digitized temperature input is transmitted by the UART protocol. Here the data is displayed on the serial monitor.




### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/hemanthasapu/embedded_systems_project_256889/actions/workflows/Compile.yml/badge.svg)](https://github.com/hemanthasapu/embedded_systems_project_256889/actions/workflows/Compile.yml)|[![Cppcheck](https://github.com/hemanthasapu/embedded_systems_project_256889/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/hemanthasapu/embedded_systems_project_256889/actions/workflows/CodeQuality.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/bf425986b42541fd92f2459de6359d9b)](https://www.codacy.com/gh/hemanthasapu/embedded_systems_project_256889/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=hemanthasapu/embedded_systems_project_256889&amp;utm_campaign=Badge_Grade)|