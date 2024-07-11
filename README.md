# Connecting and Programming an Electrical Circuit with 6 Servo Motors:

## Project Description:
This project aims to control 6 servo motors by sweeping them through a range of 0 to 180 degrees in 10-degree increments, and then sweeping them back to 0 degrees in 10-degree decrements. The servo movements are synchronized, with a delay between each servo movement to create a smooth, choreographed effect.

To demonstrate this project, we will use the [Tinkercad](https://www.tinkercad.com/circuits) simulation platform, which allows us to build and test the circuit without any physical hardware.


Hardware Used:
  1. Arduino Uno
  2. 6 Micro Servo Motors
  3. Jumper wires or Cables
  4. Breadboard


## Servo Motors:

Servo motors are a type of actuator that are widely used in various applications, such as robotics, remote-controlled devices, and automation systems. They consist of the following key components:
  1. Electric Motor
  2. Gearbox
  3. Position Sensor
  4. Control Circuit 

Range of Movement:
  
- limited range of movement, usually between 0 and 180 degrees.
      
Voltage:
    
- Typically operate on a low voltage, usually in the range of 4.8 to 6 volts.


Servo Motor Control:
 
- Pulse Width Modulation (PWM)
- Input Signals 
- Feedback Loop 

Types:
 
- Standard Servo Motors
- Continuous Rotation Servo Motors
- High-Torque Servo Motors 
 
Applications:

- Robotics
- Remote-Controlled Devices
- Automation and Machinery
    
 <img src="https://github.com/user-attachments/assets/c8c1af2b-4f94-43eb-91ed-70ce445a26a6" width="320" height="300">


***

## Connecting and Programming the Circuit
Now that we have a better understanding of servo motors, let's proceed with the project and connect and program the 6 servo motors using an Arduino Uno.

The code for this project is written in C++, which is the primary programming language used for Arduino development. The Arduino Uno board is programmed using the Arduino IDE, which provides a user-friendly interface and a suite of libraries to interact with various hardware components.

Here's the high-level overview of the steps involved:

1. Connect the 6 servo motors to the Arduino Uno board using the appropriate pins and jumper wires.
2. Import the necessary Arduino libraries, such as the `` <Servo.h>`` library, to control the servo motors.
3. Initialize and set up the servo motor objects in the code.
4. Write a loop that sweeps the servo motors from 0 to 180 degrees and back to 0 degrees, with a delay between each movement to create a smooth, choreographed effect.
5. Upload the code to the Arduino Uno board and test the circuit in the Tinkercad simulation.


By following these steps, you can create a fully functional electrical circuit that controls 6 servo motors in a synchronized and choreographed manner. The Tinkercad platform provides a convenient way to simulate and test the circuit without the need for physical hardware.

You can view the [FULL CODE]

[[what is git]()]




