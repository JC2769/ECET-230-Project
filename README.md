# Personalized Weather Station

By: Joshua Chary & Shival Panchal

## Overview

The Personalized Weather Station is a custom embedded environmental monitoring system designed to measure:

- Temperature
- Humidity
- Atmospheric Pressure

The project was developed as part of ECET 230 and focuses on:

- Embedded system design
- PCB development
- Environmental sensing
- USB communication
- Manufacturing preparation
- Real-world engineering troubleshooting

The final system uses:
- ATmega328P-A microcontroller
- BME280 environmental sensor
- CH340C USB-to-serial interface
- Dual USB-C connections
- Python-based monitoring software

The project evolved from an early Raspberry Pi and DHT22 proof-of-concept into a smaller and more realistic custom PCB-based embedded system.

---

# Final System Features

## Hardware Features

- ATmega328P-A microcontroller
- BME280 environmental sensor
- CH340C USB-to-serial communication
- Dedicated USB-C power input
- Dedicated USB-C communication port
- 3.3V voltage regulation
- Crystal oscillator
- ISP programming header
- Test points for debugging
- Status LED
- ERC/DRC verified PCB design

## Software Features

- USB serial communication
- Python-based environmental monitoring
- Real-time graphing
- Weather trend estimation
- ntfy notification support
- Environmental data processing

---

# Included Project Files

This repository includes:

- Final Report
- Bill of Materials (BOM)
- Gerber Files
- Drill Files
- PCB Ordering Instructions
- Original Project Definition
- Updated Project Definition
- Source Code / Software

---

# Development Path

The project originally began as a Raspberry Pi and DHT22 proof-of-concept system used to validate environmental sensing concepts.

As development progressed, the project transitioned toward:
- A custom PCB design
- ATmega328P-A embedded system
- BME280 environmental sensing
- USB serial communication
- Python-based software integration

This redesign created a more realistic and manufacturable embedded product.

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

---

# PCB Design

The PCB was designed in KiCad and includes:

- Schematic capture
- PCB layout and routing
- ERC verification
- DRC verification
- Gerber generation
- Drill file export
- BOM generation
- 3D board rendering

The project also explored 4-layer PCB concepts to better understand:
- Inner-layer routing
- Via management
- PCB stackups
- Professional PCB workflows

---

# Manufacturing Readiness

The project includes:
- Gerber files
- Drill files
- BOM
- PCB ordering instructions

The PCB can be fabricated using:
- JLCPCB
- PCBWay
- OSHPark

The project should still be considered an educational prototype until physically assembled and fully validated.

---

# User Workflow

1. Connect the dedicated USB-C power connector
2. Connect the USB-C communication port to the computer
3. Launch the Python monitoring application
4. Environmental data is transferred through USB serial communication
5. The software graphs and processes the readings
6. ntfy notifications may be sent during demonstration operation

---

# Lessons Learned

This project provided practical experience with:
- Embedded system design
- PCB routing and layout
- Hardware troubleshooting
- USB communication
- Voltage regulation
- Manufacturing preparation
- Engineering documentation

Major lessons learned included:
- Incorrect sensor pin labeling can damage hardware
- Design reviews improve PCB quality
- Proper decoupling is critical for stable operation
- Real engineering projects evolve significantly during development

---

# Contributors

Joshua Chary
- Documentation
- Troubleshooting documentation
- PCB review assistance
- Project organization
- Presentation preparation

Shival Panchal
- PCB layout
- Hardware integration
- Embedded system implementation
- Schematic development

---

# Course Information

Institution: New Jersey Institute of Technology (NJIT)  
Course: ECET 230

---

# Final Notes

The Personalized Weather Station demonstrates the complete engineering workflow from proof-of-concept development through manufacturable PCB preparation.

The project combines:
- Embedded hardware
- Environmental sensing
- PCB manufacturing preparation
- USB communication
- Software integration
- Engineering documentation

into a realistic embedded system design experience.
