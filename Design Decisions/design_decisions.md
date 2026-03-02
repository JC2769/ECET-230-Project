# Environmental Sensor Subsystem – Design Decisions

## 1. Sensor Selection Decision

### Final Decision
Use the DHT22 (AM2302) as the primary environmental sensor for the proof-of-concept prototype.

### Original Plan
The initial system design included the BME280 sensor to measure pressure, temperature, and humidity.

### Issue Encountered
The BME280 modules received were unreliable and produced inconsistent or non-functional readings during testing. Multiple wiring configurations and software libraries were tested, but stable communication could not be achieved.

### Justification for Change
- DHT22 units functioned reliably during testing
- Reduced integration risk before the midterm deadline
- Simplified debugging process
- Ensured stable demonstration of core functionality

System stability and successful demonstration were prioritized over multi-sensor integration for the midterm version.

---

## 2. Subsystem Scope Adjustment

### Decision
Limit environmental monitoring to:
- Temperature
- Humidity

Pressure sensing will be reintroduced in a later revision once reliable hardware is available.

### Justification
- Ensures working prototype for demonstration
- Prevents unstable hardware from affecting overall system
- Keeps development aligned with project timeline

---

## 3. Sampling Rate Decision

### Decision
Implement a 2-second sampling interval.

### Justification
- Matches DHT22 minimum recommended interval
- Reduces timing-related read failures
- Provides stable real-time updates

---

## 4. Error Handling Strategy

### Decision
Implement structured retry logic (3 attempts per cycle) and store the last valid reading.

### Justification
- DHT22 uses a timing-sensitive single-wire protocol
- Linux is not a real-time operating system
- Retry logic significantly improves system stability
- Preserving last valid reading prevents UI instability

---

## 5. Execution Method

### Decision
Run scripts using sudo python3 during development.

### Justification
- GPIO access requires elevated permissions on Raspberry Pi OS
- Ensures reliable hardware communication during testing
- Acceptable for educational prototyping
