Arduino Uno R3 - CP1 LDR E BUZZER
===========================================

# Quick links

- [CP1 LDR E BUZZER - EDGE FINAL](https://www.tinkercad.com/things/dskS3g9jSaC)
- [TinkerCad](https://www.tinkercad.com)

# Arduino Uno R3

The Arduino Uno R3 is a popular microcontroller board that is part of the Arduino family of products. It is designed for prototyping and building electronic projects and is widely used by hobbyists, students, and professionals in various fields. The "R3" in its name indicates the revision number, with each revision typically introducing minor improvements and enhancements.
# Contents
- [Overview](#overview)
- [Project Description](#project-description)
- [Installation and Usage](#installation-and-usage)
- [Who Contributed](#people-who-contributed)
- [Documentation](#documentation)
- [Using Tinkercad](#using-tinkercad-for-arduino-uno-r3-projects)

# Overview
You have been hired by Vinheria Agnello to develop a monitoring system to be installed in their wine storage environment. The owner of Vinheria has informed you that wine quality is directly influenced by the conditions of temperature, humidity, and lighting in the environment. In this initial phase, you proposed a multi-stage project to the owner, and your first challenge is as follows:

- Develop a system using Arduino that captures ambient light intensity information. To do this, research Light Dependent Resistors (LDRs), understand how they function, and explore how they can be used in the project.

- Once the data is collected, implement an alarm system using LEDs to signal when the environment is within acceptable limits or when any parameter exceeds predefined thresholds. Use a green LED to indicate an OK status, a yellow LED to indicate a warning level, and a red LED to signal a problem.

- When light intensity reaches the warning level, a buzzer will sound for 3 seconds. The buzzer will sound again if the light intensity remains in the warning state.

# Project Description
The proposed project for Vinheria Agnello aims to create a monitoring system capable of controlling environmental conditions within the wine storage area, with an initial focus on light intensity. Wine quality is highly sensitive to temperature, humidity, and lighting conditions, so this first challenge concentrates on capturing and alerting to inadequate light levels.

The system will consist of three levels of visual signaling to indicate the state of ambient light conditions:

1. **Green LED:** This LED will be used to indicate that light conditions are within predefined limits, meaning the environment is suitable for wine storage.

2. **Yellow LED:** The yellow LED will activate when light intensity reaches warning levels, indicating that environmental conditions are approaching the acceptable limit for wine preservation. This alerts operators to check and adjust the environment and active a buzzer for 3seconds.

3. **Red LED:** When light intensity exceeds acceptable limits, the red LED will active a buzzer to indicate a critical problem in the storage environment. Immediate intervention is required to prevent damage to the wines.

Additionally, the system will include a buzzer that will sound for 3 seconds whenever light intensity reaches the warning level. This provides an additional audible alert to draw attention to the situation. The buzzer will continue to sound if light intensity remains in the warning state, ensuring it is not overlooked.

This is the first step in the broader project to monitor wine storage conditions at Vinheria Agnello. With the success of this phase, the team plans to expand the system to monitor temperature and humidity, providing comprehensive control over the critical variables affecting wine quality in storage.

# Installation and Usage
To install and use the system, follow these steps:

1. **Hardware Setup:** Assemble the Arduino board and connect the LDR and LEDs as per the provided schematic (details in the project documentation).

2. **Upload Code:** Upload the Arduino code provided in the project repository to the Arduino board.

3. **Power On:** Power on the system, and it will begin monitoring light conditions in the storage environment.

4. **Interpreting LED Signals:** Pay attention to the LEDs' colors to determine the status:
  - Green LED: Environment is OK.
  - Yellow LED: Warning - check and adjust environmental conditions.
  - Red LED: Critical problem - immediate action required.

5. **Buzzer Alert:** If the environment is in a warning state (yellow LED), the buzzer will sound for 3 seconds. If the condition persists, the buzzer will repeat the alert.


#  People Who Contributed

In this section, we acknowledge and express our gratitude to the individuals who have contributed to the success of this project.

- Jorge Henrique Freire Booz - **RM 552700**
- Lucas Eduardo Garcia - **RM 554070**
- Felipe Santana - **RM 554259**
- Erick Molina - **RM 553852**
- Marcelo Vieira - **RM 552953**

# Using Tinkercad for Arduino Uno R3 Projects

[Tinkercad](https://www.tinkercad.com?utm_source=arduino-uno-r3) is a versatile online platform for creating and simulating electronic circuits and microcontroller-based projects. It's particularly useful for working with the Arduino Uno R3 and offers a range of features to facilitate project development and experimentation.

#  Documentation

Documentation for latest development version: https://docs.arduino.cc/hardware/uno-rev3

