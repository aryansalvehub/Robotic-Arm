Journal #1 by @aryansalvehub

The idea was to be started with designing and rough modeling, so the thing i had was dimensions of servo motors so being new to fusion i started with making the part which would link between the Base anf the arm . I made it by first placing the servo motor and then adding the 2nd motor (the MSG90 servo motor) such that the would be fixed and then i made a bracket sto fix both the motors together and the then i attached them in the desired orientation such that one gear of motoor fixes with the bsse and the other motor is linked with the arm 1 such that the both can move independently. Being new it difficult to make each and every dimensiom matching to the motors but after 1st half it was easier for 2nd half as i was easy to make it with respect to the second motor.
<img width="905" height="603" alt="servo motor bracet" src="https://github.com/user-attachments/assets/5a7b998c-038d-4293-b3ca-955fd9db84a8" />

Journal #2 by @ryansalvehub
After completeing the bracket for the two motors we have to make the arm for 2nd degree of freedom, so i started by making 2d layout of the design of arm keeping it as simple as possible such that very less filament it should consume and i did it by making a two 'Y' like structure and then making it by just joining the two parts, and then making stable for the movement it was difficult for a begineer as it was hard to make presice fitting snf too making it stable for the movement, its it the part of the robotic arm which would make it lean forward and backward by movement of joystick 1, after a while after making the bsic structure i did was the right wire management for thhe above part so what i did was addig holes in betting the links of the structure so that wires of the servo motors can be organisedand passing through it. For the Second Part i need to keep the precise shape for fitting of upper bracjet of the servo motors so i added a extra space gap for fitting of the above part.
<img width="1014" height="675" alt="Arm !" src="https://github.com/user-attachments/assets/088dd182-c636-4c10-a742-205cd16e7061" />

Journal #3 by @aryansalvehub

Time - 51min +  1hr 36 min

After making the 2nd arm, there was now a need to add a 3rd servo motor, which would move the gripper up and down using the movement of the 2nd joystick. Therefore, the arm needed to be stronger to support the weight of the servo as well as the object it would pick up. To achieve this, I made the walls thicker and added a broader attachment, making the structure strong enough to properly handle the combined weight of the object and the two servos.

journal #4 by @Mwezi2000 total time = 1hr 28 mins 
 i started with making tx and rx schematic digram for the roboarm 
 for the tx circuit i have used arduino nano as transmitter with 2 joysticks to give me 4-axis proportional control over the arm's servos, plus their built-in pushbuttons for claw toggle and mode selection. 


 <img width="1470" height="861" alt="image" src="https://github.com/user-attachments/assets/63f6f3be-8420-4ac5-9453-7d9d376e27aa" />

 and for the arm receiver side today. Since servos are notorious for drawing tons of current and resetting microcontrollers, I decided to give every single servo motor its own dedicated L7805 regulator with input/output filter caps so the lines stay clean. The Arduino Uno handles the PWM signals from digital pins D3, D5, D6, and D9, running off the main battery rail through a diode and master power switch. Threw in a quick 330Ω resistor and LED on the Uno's 5V rail as a basic power indicator. Realized I still need to drop in the actual RF receiver module pinout so it can talk to the remote, but the main power routing and motor control sections are basically done

 <img width="1468" height="926" alt="image" src="https://github.com/user-attachments/assets/f620f88a-8826-4909-a918-d4a985b28547" />


 
