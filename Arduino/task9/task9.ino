#include <U8x8lib.h>
#include "DHT.h"

#define DHTPIN 3
#define DHTTYPE DHT11

U8X8_SSD1306_128X64_NONAME_HW_I2C u8x8(U8X8_PIN_NONE);
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  u8x8.begin();
  u8x8.setFlipMode(1);
  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  u8x8.setFont(u8x8_font_chroma48medium8_r);
  u8x8.setCursor(0, 0);

  u8x8.println("Temperature: ");
  u8x8.print(temperature);
  u8x8.println("°C");

  u8x8.println("");

  u8x8.println("Humdity: ");
  u8x8.print(humidity);
  u8x8.println("%");
}
