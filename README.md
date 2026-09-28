# Robotic-Arm
An Robotic arm with Arduino UNO And Nano, with Rx and Tx controls with 4 degree of freedom and a controller with 2 joysticks
4-DOF Joystick Controlled Robotic Arm Project Report

This project involves designing and fabricating a 4-DOF robotic arm that is controllable by a two-joystick controller. The purpose of this project is to design and fabricate a low-cost and simple robotic arm capable of performing a pick-and-place operation. The robotic arm consists of a set of links and joints that enable it to perform four types of movement. These include the rotation of the base, shoulder movement, elbow and wrist movement, and finally, gripper movement.


The design makes use of an Arduino Nano as the transmitting module and Arduino UNO as the receiving module. Two HW504 analog joysticks are connected to the Arduino Nano to mimic the movement of the robotic arm. The Arduino Nano reads the analog output from the joysticks and sends the information to Arduino UNO through UART communication. Arduino UNO is connected to four MG90S servo motors to control the movement of the four joints of the robotic arm.

The project utilizes a range of materials to fabricate the robotic arm. Some of the components such as the links and joints can be 3D printed using PLA+ filament. The base part of the robotic arm is made using 3-5 mm thick acrylic sheets and cut using a laser cutter. The design of the various parts is done in Fusion 360 before being printed or cut.

The electrical components of the design include a 7.4 V 2-cell LiPo battery, voltage regulators, connectors, switches, and other miscellaneous components. The four servo motors have their own regulator circuits which are connected to the main circuit. The main circuit is connected to the robotic arm through bolts, nuts, and spacers that have been machined to fit the design.

The main goal of the project is to develop a robotic arm capable of picking and placing a given object. Ideally, the robotic arm should pick a 20 × 20 mm cube that weighs between 5-10 g. Once the assembly has been made, the functionality of the robotic arm is evaluated. This includes testing the response of the joysticks, the range of motion of the robotic arm, its stability, positioning accuracy, and successful pick-and-place operation.

Overall, this project is an excellent application of knowledge in CAD, 3D printing, laser cutting, Arduino programming, and robotics. The project goes further to demonstrate a working knowledge of how to configure a simple robotic arm that is capable of mimicking human motion to perform a specific task.
