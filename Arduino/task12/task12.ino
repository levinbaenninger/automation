#include <U8x8lib.h>

U8X8_SSD1306_128X64_NONAME_HW_I2C u8x8(/* reset=*/ U8X8_PIN_NONE);

const int buttonPin = 6;
int amountPressed = 0;
int lastButtonState = LOW;

void setup() {
  u8x8.begin();
  u8x8.setFlipMode(1);
  pinMode(buttonPin, INPUT);
}

void loop() {
  u8x8.setFont(u8x8_font_chroma48medium8_r);
  u8x8.setCursor(0, 0);

  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH && lastButtonState == LOW) {
    amountPressed++;
    delay(50);
    u8x8.clear();
    u8x8.print(amountPressed);
  }

  lastButtonState = buttonState;

  delay(50);
}
