const int ledPin = 4;
const int rotaryPin = A0;

int rotaryValue;

void setup() {
  pinMode(rotaryPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  rotaryValue = analogRead(rotaryPin);
  digitalWrite(ledPin, HIGH);
  delay(rotaryValue);
  digitalWrite(ledPin, LOW);
  delay(rotaryValue);
}
