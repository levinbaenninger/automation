const int buzzerPin = 5;
const int rotaryPin = A0;
const int buttonPin = 6;
const int ledPin = 4;

int rotaryValue, buttonState, buttonLastState = LOW;
bool buzzerEnabled = false;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  rotaryValue = analogRead(rotaryPin);
  int frequency = map(rotaryValue, 0, 1023, 16000, 20);

  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH && buttonLastState == LOW) {
    buzzerEnabled = !buzzerEnabled;
  }

  if (buzzerEnabled) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, frequency);
  }
  else {
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }
}
