# Luftdruck und Höhe

Auf dem Arduino Grove gibt es einen weiteren Sensor welchen den Luftdruck und die Höhe messen kann. Dafür nutzen wir die **Grove BMP280** Bibliothek und erstellen ein Objekt aus der Klasse.

````C++
#include "Seeed_BMP280.h"
#include <Wire.h>

BMP280 bmp280;
````

Mit der Methode `init()` können wir überprüfen, ob alles geklappt hat:

````C++
if (!bmp280.init()) {
  Serial.println("Device not connected or broken!");
}
````

Nun können wir die mit den Methoden `getTemperature()`, `getPressure` und `calcAltitude(pressure)` die jeweiligen Werte auslesen:

````C++
float temperature = bmp280.getTemperature();
float pressure = bmp280.getPressure();
float altitude = bmp280.calcAltitude(pressure);
````

