const int ledPin = 4;
const int lightPin = A6;

int lightValue;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  lightValue = analogRead(lightPin);

  if (lightValue < 400) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  
  Serial.println(lightValue);
}
