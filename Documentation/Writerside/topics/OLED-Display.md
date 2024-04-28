# OLED Display

Um das OLED Display anzusteuern, müssen wir zuerst eine Bibliothek über den Library Manager einbinden. Die Bibliothek heisst **U8g2**. Diese Library stellt uns eine Schnittstelle zu unserem OLED-Display zur Verfügung.

Mit `#include` binden wir die Library ein:

````C++
#include <U8x8lib.h>
````

Als Nächstes initialisieren wir das Objekt `u8x8`:

````C++
U8X8_SSD1306_128X64_NONAME_HW_I2C u8x8(U8X8_PIN_NONE);
````

Jetzt können wir die Methoden des zuvor initialisierten Objekts nutzen:

````C++
void setup() {
  u8x8.begin(); // Starten des Displays
  u8x8.setFlipMode(1); // Display um 180° drehen
}

void loop() {
  u8x8.setFont(u8x8_font_chroma48medium8_r); // Definiert die zu nutzende Schriftart
  u8x8.setCursor(0, 0); // Definiert, wo der Output startet
  u8x8.print("Hello World"); // Schreibe den Inhalt auf das Display
}
````