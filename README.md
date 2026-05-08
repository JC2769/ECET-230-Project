# Personalized Weather Station

By: Joshua Chary & Shival Panchal

## Overview

The Personalized Weather Station is a custom embedded environmental monitoring system designed to collect and process real-time environmental data including:

- Temperature
- Humidity
- Atmospheric Pressure

The project was developed as part of ECET 320 and focuses on:

- Embedded system design
- PCB development
- Environmental sensing
- USB communication
- Manufacturing preparation
- Engineering documentation
- Real-world debugging and troubleshooting

The final system uses an ATmega328P-A microcontroller, a BME280 environmental sensor, dual USB-C connectivity, USB serial communication, and a Python-based computer application for graphing, trend prediction, and notifications.

---

# Project Goals

The major goals of this project were:

- Design a manufacturable custom PCB in KiCad
- Interface environmental sensors with an embedded microcontroller
- Develop a compact embedded weather monitoring system
- Implement USB serial communication
- Prepare fabrication-ready manufacturing files
- Explore prediction-based weather monitoring concepts
- Gain experience with real engineering workflows from concept to manufacturable design

---

# Final System Features

## Hardware Features

- ATmega328P-A microcontroller
- BME280 environmental sensor
- CH340C USB-to-serial communication
- Dual USB-C connectors
  - Dedicated USB-C power input
  - Dedicated USB-C communication port
- 3.3V voltage regulation
- ISP programming header
- Test points for debugging and validation
- Status LED
- Crystal oscillator for stable MCU timing
- ERC/DRC verified PCB design

## Software Features

- USB serial communication with external computer software
- Python-based environmental monitoring application
- Real-time graphing
- Weather trend estimation
- Environmental condition classification
- ntfy phone notification support
- Data conversion and processing

---

# Development Path

The project originally began as a Raspberry Pi and DHT22 proof-of-concept system. Early testing validated the environmental sensing workflow, but the design later transitioned to a smaller and more realistic embedded PCB solution using the ATmega328P-A and BME280 sensor.

The project evolved significantly throughout development due to:
- Sensor troubleshooting
- PCB design reviews
- Manufacturing considerations
- USB communication requirements
- Power design decisions
- Embedded system optimization

This iterative development process better reflected real engineering workflows and product refinement.

---

# Major Components

| Component | Purpose |
|---|---|
| ATmega328P-A | Main embedded microcontroller |
| BME280 | Temperature, humidity, and pressure sensing |
| CH340C | USB-to-serial communication |
| USB-C Connectors | Power and communication interfaces |
| LD1117S33TR | 3.3V voltage regulator |
| Crystal Oscillator | Stable MCU timing |
| ISP Header | Firmware programming |
| Test Points | Validation and debugging |
| LED + Resistor | Status indication |

---
