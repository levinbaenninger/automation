const int ledPin = 4;
int inputNumber;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.println("Gib eine Zahl zwischen 1 und 5 ein:");
}

void loop() {
  if (Serial.available() > 0) {
    int input = Serial.parseInt(); 
    if (input >= 1 && input <= 5) {
      for (int i = 1; i <= input; i++) {
        digitalWrite(ledPin, HIGH);
        delay(500);
        digitalWrite(ledPin, LOW);
        delay(500);
      }
      Serial.println("Gib eine Zahl zwischen 1 und 5 ein:");
    } else {
      Serial.println("Falsche Eingabe! Gib eine Zahl zwischen 1 und 5 ein:");
    }
  }
}
