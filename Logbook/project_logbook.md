# Project Definition – Personal Weather Station

## High-Level Description

This project is an embedded environmental monitoring system designed to collect real-time atmospheric data and provide user feedback based on programmed logic. The system uses environmental sensors connected to a Raspberry Pi to measure temperature, humidity, and (future) atmospheric pressure.

The system processes sensor data and provides feedback through a graphical interface and audible alerts.

---

## Purpose

The purpose of this project is to design and implement a functional microcontroller-based environmental monitoring system using concepts learned in ECET-230.

The project emphasizes:

- Hardware-software integration
- Structured system organization
- Reliable sensor communication
- Iterative refinement
- Clear engineering documentation

The goal is to demonstrate stable data acquisition, processing, and meaningful user feedback.

---

## Objectives

- Design a complete environmental monitoring system using a block diagram
- Implement the system using breadboard-level hardware
- Interface environmental sensors with Raspberry Pi GPIO and I2C
- Demonstrate stable temperature and humidity monitoring
- Integrate pressure sensing (BME280) once stable
- Implement trend-based weather detection logic
- Demonstrate correct data processing and output feedback
- Maintain organized engineering documentation in GitHub

---

## User Interaction

The user interacts with the system passively.

The system continuously monitors environmental conditions and displays:

- Temperature readings
- Humidity readings
- Status messages
- Alerts (when conditions indicate change)

If atmospheric pressure drops rapidly (future implementation), the system will notify the user through:

- GUI message update
- Audible alert

The system operates automatically without requiring manual user input during normal operation.

---

## System Components

### Inputs
- DHT22 (Temperature and Humidity)
- BME280 (Pressure – integration in progress)

### Processing
- Raspberry Pi 4
- Python-based logic
- Retry handling and trend detection algorithms

### Outputs
- Tkinter GUI display
- Console monitoring
- Audible alert (speaker/buzzer)

### Power
- 5V DC supply (Raspberry Pi regulated input)
- 3.3V logic for GPIO communication

---

## Constraints

- Must be implementable on a breadboard using development modules
- Must operate at 3.3V GPIO logic levels
- Linux timing limitations require retry logic for sensor stability
- Hardware reliability must be validated before full integration
- All design choices must remain feasible within the ECET-230 course scope

---

## Current Scope

### Completed
- DHT22 integration
- 2-second stable sampling
- Retry logic implementation
- GUI environmental display

### In Progress
- BME280 pressure integration
- Pressure trend detection
- Rain likelihood notification logic

---

## Project Vision

The final system will operate as a reliable personal weather station capable of:

- Monitoring environmental conditions in real time
- Detecting meaningful atmospheric trends
- Providing clear user feedback
- Operating stably under real-world conditions

The project evolves through structured debugging, iterative refinement, and subsystem validation.
