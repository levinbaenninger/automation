# Temperatur und Luftfeuchtigkeit

Um auf den Temperatur- und Luftfeuchtigkeitssensor zuzugreifen, müssen wir ebenfalls eine Bibliothek einbinden, die **Grove Temperature And Humidity Sensor** Bibliothek.

Danach müssen wir diese Bibliothek mit `#include` einbinden und definieren einige Konstanten:

````C++
#include "DHT.h"

#define DHTPIN 3
#define DHTTYPE DHT11
````

Als Nächstes erstellen wir ein Objekt daraus:

````C++
DHT dht(DHTPIN, DHTTYPE);
````

Mit diesem Objekt können wir nun die Temperatur und Luftfeuchtigkeit auslesen:

````C++
float temperature = dht.readTemperature();
float humidity = dht.readHumidity();
````

