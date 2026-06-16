Arduino Surveillance Robot
Overview

The Arduino Surveillance Robot is a mobile robotic platform designed for basic surveillance, obstacle detection, and environmental scanning. The robot combines an Arduino Uno, HC-SR04 ultrasonic sensor, servo motors, and a four-wheel drive system to navigate and monitor its surroundings.

The ultrasonic sensor is mounted on a servo motor, allowing it to rotate and scan a wider area for obstacles. Based on sensor readings, the robot can make navigation decisions and avoid collisions. A laser/turret module can also be integrated for demonstration and targeting purposes.

This project demonstrates the integration of sensors, actuators, motor drivers, and embedded programming to create an intelligent robotic vehicle suitable for educational and hobbyist applications.

Project Objectives
Build a mobile surveillance robot using Arduino.
Implement obstacle detection and avoidance.
Perform environmental scanning using a rotating ultrasonic sensor.
Control multiple DC motors through a motor driver.
Integrate a laser/turret module for targeting demonstrations.
Create a battery-powered autonomous robotic platform.
Hardware Components
Component	Quantity	Description
Arduino Uno	1	Main microcontroller used to control the robot
HC-SR04 Ultrasonic Sensor	1	Measures distance to obstacles
Servo Motor	2	One for sensor scanning and one for turret movement
DC Gear Motors	4	Provide movement to the robot
L298N Motor Driver	1	Controls motor direction and speed
Laser/Turret Module	1	Optional targeting and demonstration module
Push Buttons	Multiple	User input and control
PCB Board	1	Circuit assembly
Jumper Wires	Multiple	Electrical connections
18650 Batteries	4	Power source
Toy Car Wheels	4	Mobility system
Sunmica Board	1	Robot chassis and mounting platform
System Architecture
                +----------------+
                |  Arduino Uno   |
                +-------+--------+
                        |
        +---------------+---------------+
        |                               |
        v                               v
+---------------+            +------------------+
| HC-SR04 Sensor|            | L298N Driver     |
+-------+-------+            +--------+---------+
        |                             |
        v                             v
+---------------+          +----------------------+
| Servo Scanner |          | 4 DC Gear Motors     |
+---------------+          +----------------------+

        |
        v
+----------------+
| Laser/Turret   |
+----------------+
Features
Obstacle Detection

The HC-SR04 ultrasonic sensor continuously measures the distance between the robot and nearby objects. When an obstacle is detected within a predefined range, the robot can stop, change direction, or perform a scan to determine an alternative path.

Benefits
Prevents collisions
Improves autonomous navigation
Enables real-time environmental awareness
Servo-Based Scanning

The ultrasonic sensor is mounted on a servo motor that rotates through different angles. This allows the robot to:

Scan left and right
Measure distances in multiple directions
Determine the safest path for movement
Scan Angles
Left Scan   <-  0° - 90°
Center Scan <- 90°
Right Scan  <- 90° - 180°
Four-Wheel Drive System

The robot uses four DC gear motors connected to a motor driver, providing stable movement across different surfaces.

Supported Movements
Forward
Backward
Left Turn
Right Turn
Stop
Laser/Turret Module

An optional laser module can be mounted on the robot for:

Target indication
Demonstration purposes
Directional tracking experiments

The turret can be controlled using a servo motor to adjust its orientation.

Battery Powered Operation

The robot is powered using four 18650 rechargeable lithium-ion batteries.

Advantages
Portable
Rechargeable
Long operating time
Suitable for outdoor demonstrations
Working Principle
Step 1: Initialization

When powered on:

Arduino initializes all sensors and motors.
Servo motors move to their default positions.
Distance measurements begin.
Step 2: Environment Scanning

The ultrasonic sensor scans the environment by rotating through predefined angles.

Scan Left
     ↓
Scan Center
     ↓
Scan Right

Distance values are recorded and analyzed.

Step 3: Obstacle Detection

If an object is detected within the threshold distance:

Robot stops.
Servo scans alternative directions.
Best available path is selected.
Step 4: Navigation

Based on sensor data:

Move Forward
Turn Left
Turn Right
Reverse if necessary
Step 5: Continuous Monitoring

The robot continuously repeats the scanning and navigation process to maintain autonomous operation.

Circuit Connections
Ultrasonic Sensor
HC-SR04 Pin	Arduino Pin
VCC	5V
GND	GND
TRIG	Digital Pin
ECHO	Digital Pin
Servo Motor
Servo Pin	Arduino
Signal	PWM Pin
VCC	5V
GND	GND
L298N Motor Driver
L298N	Arduino
IN1	Digital Pin
IN2	Digital Pin
IN3	Digital Pin
IN4	Digital Pin
ENA	PWM Pin
ENB	PWM Pin
Applications

This project can be used for:

Educational robotics
Obstacle avoidance demonstrations
Smart vehicle prototypes
Security and surveillance experiments
Autonomous navigation research
STEM learning projects
Future Improvements

Potential upgrades include:

Wi-Fi camera integration
Live video streaming
Bluetooth control
Mobile application support
GPS navigation
Voice commands
AI-based object recognition
Night vision camera module
Autonomous path planning

Contributors:
Harpreet Singh
Anmol Singh
