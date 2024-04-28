const int ledPin = 4;
const int soundPin = A2;

int soundValue;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  soundValue = analogRead(soundPin);

  if (soundValue > 500) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }

  Serial.println(soundValue);
}
