# Generelle Syntax

### Methoden

Es gibt in jedem Programm standardmässig zwei Methoden:

- `setup()` - Die `setup()`-Methode wird ausgeführt, wenn das Sketch startet. Hier kann man bspw. Variablen initialisieren, Pin Modes einstellen, Libraries einbinden, etc.
- `loop()` - In der `loop()`-Methode ist unser eigentliches Programm, welches immer wieder ausgeführt wird

Natürlich können wir auch unsere eigenen Methoden erstellen und aufrufen.

### pinMode()

Mit der Funktion `pinMode()` konfigurieren wir einen spezifischen Pin entweder als Input oder Output.

````C++
pinMode(pin, mode)
````

**Parameter:**

- `pin`: Die Arduino Pin-Nummer
- `mode`: `INPUT`, `OUTPUT` oder `INPUT_PULLUP`

> `INPUT_PULLUP` ist im übertragenen Sinne ein Öffner, heisst, wenn er gedrückt wird, öffnet sich der Stromkreis

### digitalWrite()

Mit `digitalWrite()` schreiben wir ein Signal (`HIGH` oder `LOW`) auf einen Pin.

````C++
digitalWrite(pin, value)
````

**Parameter:**

- `pin`: Die Arduino Pin-Nummer
- `value`: `HIGH` oder `LOW`

### digitalRead()

Mit der `digitalRead()`-Methode können wir den aktuellen Wert eines digitalen Pins lesen.

````C++
digitalRead(pin)
````

**Parameter:**

- `pin`: Die Arduino Pin-Nummer, von welcher wir lesen wollen

### analogWrite()

Mit der Funktion `analogWrite()` können wir einen analogen Wert zu einem Pin schreiben.

````C++
analogWrite(pin, value);
````

**Parameter:**

- `pin`: Die Arduino Pin-Nummer
- `value`: Ein Wert zwischen `0` (aus) und `255` (an)

### analogRead()

Mit `analogRead()` können wir den Wert eines analogen Pins auslesen; der Wert reicht von 0 bis 1023.

````C++
analogRead(pin)
````

**Parameter:**

- `pin`: Die Arduino Pin-Nummer