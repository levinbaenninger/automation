#include "Seeed_BMP280.h"
#include <Wire.h>

BMP280 bmp280;

void setup() {
  Serial.begin(9600);
  if (!bmp280.init()) {
    Serial.println("Device not connected or broken");
  }
}

void loop() {
  float temperature = bmp280.getTemperature();
  float pressure = bmp280.getPressure();
  float altitude = bmp280.calcAltitude(pressure);

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");

  Serial.print("Pressure: ");
  Serial.print(pressure);
  Serial.println("Pa");

  Serial.print("Altitude: ");
  Serial.print(altitude);
  Serial.println("m");

  delay(10000);
} 
