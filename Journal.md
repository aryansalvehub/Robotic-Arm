Journal #1 by @aryansalvehub

The idea was to be started with designing and rough modeling, so the thing i had was dimensions of servo motors so being new to fusion i started with making the part which would link between the Base anf the arm . I made it by first placing the servo motor and then adding the 2nd motor (the MSG90 servo motor) such that the would be fixed and then i made a bracket sto fix both the motors together and the then i attached them in the desired orientation such that one gear of motoor fixes with the bsse and the other motor is linked with the arm 1 such that the both can move independently. Being new it difficult to make each and every dimensiom matching to the motors but after 1st half it was easier for 2nd half as i was easy to make it with respect to the second motor.
<img width="905" height="603" alt="servo motor bracet" src="https://github.com/user-attachments/assets/5a7b998c-038d-4293-b3ca-955fd9db84a8" />

Journal #2 by @ryansalvehub
After completeing the bracket for the two motors we have to make the arm for 2nd degree of freedom, so i started by making 2d layout of the design of arm keeping it as simple as possible such that very less filament it should consume and i did it by making a two 'Y' like structure and then making it by just joining the two parts, and then making stable for the movement it was difficult for a begineer as it was hard to make presice fitting snf too making it stable for the movement, its it the part of the robotic arm which would make it lean forward and backward by movement of joystick 1, after a while after making the bsic structure i did was the right wire management for thhe above part so what i did was addig holes in betting the links of the structure so that wires of the servo motors can be organisedand passing through it. For the Second Part i need to keep the precise shape for fitting of upper bracjet of the servo motors so i added a extra space gap for fitting of the above part.
<img width="1014" height="675" alt="Arm !" src="https://github.com/user-attachments/assets/088dd182-c636-4c10-a742-205cd16e7061" />

Journal #3 by @aryansalvehub

Time - 51min +  1hr 36 min

After making the 2nd arm, there was now a need to add a 3rd servo motor, which would move the gripper up and down using the movement of the 2nd joystick. Therefore, the arm needed to be stronger to support the weight of the servo as well as the object it would pick up. To achieve this, I made the walls thicker and added a broader attachment, making the structure strong enough to properly handle the combined weight of the object and the two servos. Hence i made it broader  by increasing the thickness of the arm. Added some slanting deign to increse the strength.
<img width="946" height="541" alt="Arm 2 " src="https://github.com/user-attachments/assets/da6cac7a-d6a0-431c-912b-0baa21d6e2c0" />
After Making the basic structure i got to know that we also need to keep the sapce for 3d printing error for around 0.2-0.3 mm, then for around the other half of this lapse i just added some gap to to minimize the fitting error such that keep ing more space for servo and increasing the hole width such that screw could easily fit inside the hole without any error.
There was also some need to change the design the slitly to fit in the motor proerly as i made it too compact for motor to go in hence added more gaps from all the four sides 



journal #4 by @Mwezi2000
total time = 1 hr 28 mins

i started with tx schematics for which i used arduino nano as transmitter
The goal here is pretty simple: two analog thumbsticks to give me 4-axis proportional control over the arm's servos, plus their built-in pushbuttons for claw toggle and mode selection.

<img width="1461" height="868" alt="image" src="https://github.com/user-attachments/assets/b3933581-12c9-492b-8188-362707c5ad3d" />

for the arm receiver side today. Since servos are notorious for drawing tons of current and resetting microcontrollers, I decided to give every single servo motor its own dedicated L7805 regulator with input/output filter caps so the lines stay clean. The Arduino Uno handles the PWM signals from digital pins D3, D5, D6, and D9, running off the main battery rail through a diode and master power switch. Threw in a quick 330Ω resistor and LED on the Uno's 5V rail as a basic power indicator. Realized I still need to drop in the actual RF receiver module pinout so it can talk to the remote, but the main power routing and motor control sections are basically done


<img width="1466" height="872" alt="image" src="https://github.com/user-attachments/assets/4d5821b2-21b5-41b7-bce2-8dac3b8bc5b9" />

journal #5 by @Mwezi2000
total time = 4 hrs 42 mins (1hr 2 min + 2hr 5 min + 1 hr 35 min )

for this weeks theme "treasure" i made some cool art (could not put it on roboarm till now, will update soon )

<img width="1469" height="931" alt="image" src="https://github.com/user-attachments/assets/70d9916b-18f0-4b47-a206-8a8e49a93a14" />

next was this crazy treasure map which took a whole lot of timeee!

<img width="1470" height="915" alt="image" src="https://github.com/user-attachments/assets/2cf86b10-b950-4d91-98bb-9ee9f01d75bb" />


<img width="1470" height="925" alt="image" src="https://github.com/user-attachments/assets/d6fd1d20-0c38-4688-9b70-f74d6063d77f" />


<img width="1470" height="930" alt="image" src="https://github.com/user-attachments/assets/366a22aa-e63e-4d17-9a90-450c2e53f1bf" />

this was it for the treasure art!



journal 5 by @Mwezi2000
total time = 3hr 33min    ( 2hr 2 min + 1hr 31 min )

Spent some time in Fusion modeling the mechanical gripper assembly today. Got the main dual-spur gear linkage laid out so both fingers close smoothly and symmetrically together. Modeled the top enclosure plate with mounting holes and cutouts to keep the whole gear train aligned and dust-free. Added the pivot link and locating pin to connect the servo horn directly to the driving side. Still have to double-check my hole tolerances for the hinge pins before sending anything to the 3D printer, but the CAD assembly is finally looking solid.


<img width="1470" height="928" alt="image" src="https://github.com/user-attachments/assets/616506e6-ed8f-4b89-8047-d7babaf0d836" />

and finally finished it by updating journal and readme

Journal #6 by @aryansalvehub

Time - 4 hrs

For this artwork, I wanted to make something fun and simple based on our robotic arm project. I took inspiration from the **Chrome dinosaur game** and mixed it with a few technology-related elements, like the Wi-Fi symbol. I liked the idea of showing the dinosaur in different sizes and positions to give the artwork a sense of movement. The desert, clouds, and cacti make it feel like a small game scene, while the pixel-art style keeps it connected to the idea of technology. Overall, I wanted the artwork to be playful and creative instead of making it look too technical.
<img width="593" height="834" alt="art for robotic arm" src="https://github.com/user-attachments/assets/0704b5e7-5056-46e2-aea2-84b92579b1c0" />




