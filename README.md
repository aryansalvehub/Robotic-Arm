# Robotic-Arm
An Robotic arm with Arduino UNO And Nano, with Rx and Tx controls with 4 degree of freedom and a controller with 2 joysticks
4-DOF Joystick Controlled Robotic Arm Project Report

This project involves designing and fabricating a 4-DOF robotic arm that is controllable by a two-joystick controller. The purpose of this project is to design and fabricate a low-cost and simple robotic arm capable of performing a pick-and-place operation. The robotic arm consists of a set of links and joints that enable it to perform four types of movement. These include the rotation of the base, shoulder movement, elbow and wrist movement, and finally, gripper movement.
<img width="975" height="597" alt="base part final" src="https://github.com/user-attachments/assets/ad6a720a-fda8-4b91-8ab4-55f5998fc702" />
<img width="905" height="603" alt="servo motor bracet" src="https://github.com/user-attachments/assets/f51d769c-3293-4d43-92d1-c058958fa68b" />
<img width="1014" height="675" alt="Arm !" src="https://github.com/user-attachments/assets/e866bb70-9ab0-44b5-99f6-adc46478f52c" />
<img width="946" height="541" alt="Arm 2 " src="https://github.com/user-attachments/assets/d1d254c7-5d24-4771-8feb-864a34029d82" />
<img width="946" height="541" alt="Arm 2 " src="https://github.com/user-attachments/assets/e3498664-b4a8-4f2d-a813-c048de7668ce" />





The design makes use of an Arduino Nano as the transmitting module and Arduino UNO as the receiving module. Two HW504 analog joysticks are connected to the Arduino Nano to mimic the movement of the robotic arm. The Arduino Nano reads the analog output from the joysticks and sends the information to Arduino UNO through UART communication. Arduino UNO is connected to four MG90S servo motors to control the movement of the four joints of the robotic arm.

The project utilizes a range of materials to fabricate the robotic arm. Some of the components such as the links and joints can be 3D printed using PLA+ filament. The base part of the robotic arm is made using 3-5 mm thick acrylic sheets and cut using a laser cutter. The design of the various parts is done in Fusion 360 before being printed or cut.

The electrical components of the design include a 7.4 V 2-cell LiPo battery, voltage regulators, connectors, switches, and other miscellaneous components. The four servo motors have their own regulator circuits which are connected to the main circuit. The main circuit is connected to the robotic arm through bolts, nuts, and spacers that have been machined to fit the design.

The main goal of the project is to develop a robotic arm capable of picking and placing a given object. Ideally, the robotic arm should pick a 20 × 20 mm cube that weighs between 5-10 g. Once the assembly has been made, the functionality of the robotic arm is evaluated. This includes testing the response of the joysticks, the range of motion of the robotic arm, its stability, positioning accuracy, and successful pick-and-place operation.
<img width="858" height="685" alt="Robotic Arm Final IMAGE" src="https://github.com/user-attachments/assets/810fb5d7-ebea-4e09-b01a-6741576c4437" />


Overall, this project is an excellent application of knowledge in CAD, 3D printing, laser cutting, Arduino programming, and robotics. The project goes further to demonstrate a working knowledge of how to configure a simple robotic arm that is capable of mimicking human motion to perform a specific task.

| Component         | Specification            | Quantity |
| ----------------- | ------------------------ | -------: |
| PS2 Joystick      | HW504 Analog Joystick    |        2 |
| Arduino Nano      | ATmega328P               |        1 |
| Voltage Regulator | LM7805                   |        1 |
| 2-Pin Connector   | PCB Connector            |        1 |
| Toggle Switch     | SPST                     |        1 |
| LED               | Red                      |        1 |
| Resistor          | 330 Ω                    |        1 |
| Diode             | 1N4007 / 1N5819          |        1 |
| Battery           | 2S LiPo, 7.4 V           |        1 |
| PCB               | Universal PCB, 8 × 18 cm |        1 |



| Component         | Specification                | Quantity |
| ----------------- | ---------------------------- | -------: |
| Servo Motor       | MG90S Metal Gear Micro Servo |        4 |
| Arduino Uno       | ATmega328P                   |        1 |
| Voltage Regulator | LM7805                       |        4 |
| LED               | Red                          |        1 |
| 2-Pin Connector   | PCB Connector                |        1 |
| Diode             | 1N4007 / 1N5819              |        1 |
| Ceramic Capacitor | 0.01 µF                      |        4 |
| Ceramic Capacitor | 0.1 µF                       |        4 |
| Female Berg Strip | Female Header                |        2 |
| Toggle Switch     | SPST                         |        1 |
| Resistor          | 330 Ω                        |        1 |
| PCB               | Zero PCB, 10 × 10 cm         |        1 |

The project architecture specifies TX (D1) → RX (D0) with a common ground between the two Arduino boards.

The Nano reads the joystick positions and sends the corresponding control information to the Uno. The Uno then converts the received commands into PWM signals for the four servos.

The project uses:

Arduino IDE — microcontroller programming
Fusion 360 — mechanical CAD and design
Fracktory — 3D-print preparation
LaserCAD — laser-cut preparation
UART Serial Communication — Nano-to-Uno communication
PWM — servo control

