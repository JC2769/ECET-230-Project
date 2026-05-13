/*
  ECET 230 Personalized Weather Station
  ATmega328P-A / Arduino Uno style firmware

  What this does:
  - Reads BME280 temperature, humidity, and pressure over I2C
  - Sends data to the computer over Serial in CSV format:
      tempC,humidity,pressurehPa
  - This matches the Python GUI format:
      parts[0] = temperature in Celsius
      parts[1] = humidity in %RH
      parts[2] = pressure in hPa

  Wiring for ATmega328P-A / Arduino Uno:
  - BME280 VIN/VCC -> 3.3V
  - BME280 GND     -> GND
  - BME280 SDA     -> A4 / PC4 / SDA
  - BME280 SCL     -> A5 / PC5 / SCL
  - BME280 SDO     -> GND for address 0x76, or 3.3V for address 0x77

  Required Arduino libraries:
  - Adafruit BME280 Library
  - Adafruit Unified Sensor
*/

#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

#define SERIAL_BAUD 9600
#define READ_DELAY_MS 1000

// Try 0x76 first because SDO is usually connected to GND.
#define BME_ADDRESS_1 0x76
#define BME_ADDRESS_2 0x77

Adafruit_BME280 bme;
bool bmeFound = false;

void setup() {
  Serial.begin(SERIAL_BAUD);
  delay(1000);

  Wire.begin();

  if (bme.begin(BME_ADDRESS_1)) {
    bmeFound = true;
  } else if (bme.begin(BME_ADDRESS_2)) {
    bmeFound = true;
  } else {
    bmeFound = false;
  }

  if (!bmeFound) {
    Serial.println("BME280_ERROR");
  }
}

void loop() {
  if (!bmeFound) {
    Serial.println("BME280_ERROR");
    delay(2000);
    return;
  }

  float tempC = bme.readTemperature();       // Celsius
  float humidity = bme.readHumidity();       // %RH
  float pressureHpa = bme.readPressure() / 100.0F;  // Pa to hPa

  // Protect against bad readings.
  if (isnan(tempC) || isnan(humidity) || isnan(pressureHpa)) {
    Serial.println("READ_ERROR");
    delay(READ_DELAY_MS);
    return;
  }

  // Send clean CSV for the Python GUI.
  Serial.print(tempC, 2);
  Serial.print(",");
  Serial.print(humidity, 2);
  Serial.print(",");
  Serial.println(pressureHpa, 2);

  delay(READ_DELAY_MS);
}
