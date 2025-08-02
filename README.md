# Arduino Servo Walk Simulation

This project controls 4 servo motors using Arduino code to simulate a basic walking mechanism for a humanoid robot.

 Functionality
- The 4 servo motors sweep back and forth for 2 seconds.
- After sweeping, all servos hold position at 90 degrees.
- The walking algorithm is explained to simulate humanoid movement.

 Tools Used
- Tinkercad (for Arduino simulation)
- Arduino UNO
- 4 Servo Motors
https://www.tinkercad.com/things/0PcWFhfNMiQ-4servo

 Walking Algorithm
1. Initialize all servos at 90°.
2. Shift weight to one leg.
3. Lift the other leg using servo.
4. Move it forward using hip servo.
5. Place it down.
6. Repeat with opposite leg.

 How to Run
- Open the simulation in Tinkercad.
- Upload the provided Arduino code.
- Start the simulation to see servo sweep and walking logic.
  
algorithm
Initialize all servos to 90°

Loop:
  // Step with right leg
  Shift weight to left leg
  Lift right leg (servo angle - up)
  Move right leg forward
  Place right leg down (servo angle - down)
  
  // Step with left leg
  Shift weight to right leg
  Lift left leg
  Move left leg forward
  Place left leg down
 
