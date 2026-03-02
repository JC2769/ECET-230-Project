# Logbook Entry – Environmental Sensor Development

## Phase: DHT22 Integration and Stabilization

### Initial Plan
The original environmental subsystem design included the BME280 sensor for pressure, temperature, and humidity monitoring.

### Hardware Issue
The BME280 modules received were unreliable. Testing resulted in inconsistent readings and communication failures. Multiple wiring configurations and library implementations were attempted, but stable operation could not be achieved.

### Engineering Decision
To maintain the project timeline and ensure a successful midterm proof-of-concept, the system was revised to use only the DHT22 sensor for temperature and humidity monitoring.

### Development Progress
- Wired DHT22 to GPIO4 (Physical Pin 7)
- Verified 3.3V logic compatibility
- Implemented initial read script
- Encountered intermittent timing failures
- Added structured retry logic (3 attempts per cycle)
- Implemented 2-second sampling interval
- Developed stable console monitoring version
- Integrated sensor into Tkinter GUI interface
- Added last-valid-reading memory handling

### Current Status
The DHT22 subsystem is stable in both console and GUI implementations. Temperature and humidity monitoring are functioning reliably.

Pressure sensing will be reintroduced once reliable hardware is available.

### Lessons Learned
- Timing-sensitive protocols require retry logic under Linux
- Hardware reliability must be validated early
- Simpler configurations improve prototype stability
