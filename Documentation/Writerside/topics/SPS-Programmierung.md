# SPS-Programmierung

Wir haben mit dem SPS LOGO! von Siemens einige Programme programmiert. Wir haben mit LOGO!Soft Comfort gearbeitet, dabei haben wir mit der graphischen Programmiersprache FUP programmiert.

## Digitaltechnik

Bei der Programmiersprache FUP arbeiten wir mit der Darstellung der Gatter der Digitaltechnik.

### NOT

![not.png](not.png)

### AND

![and.png](and.png)

### NAND

![nand.png](nand.png)

### OR

![or.png](or.png)

### NOR

![nor.png](nor.png)

### XOR (Antivalenz)

![xor.png](xor.png)

### XNOR (Äquivalenz)

![xnor.png](xnor.png)

## Beispiele - SPS-Programmierung

**Grundfunktionen**

![beispiel1.png](beispiel1.png)

Bei dieser Schaltung gibt es drei Szenarien, die eintreten könnten:

- **Kein Schalter gedrückt**: Die Lampen `Q6` und `Q7` sind aktiviert.
- **Ein Schalter gedrückt**: Die Lampen `Q5` und `Q7` sind aktiviert.
- **Alle Schalter gedrückt**: Die Lampe `Q5` ist aktiviert und das Laufband fährt nach rechts.

**Selbsthaltung**

![beispiel2.png](beispiel2.png)

Bei dieser Schaltung nutzen wir das **Selbsthalterelais** um den Stromkreis aufrechtzuerhalten.

- Wenn der Sensor `I1` aktiviert wird, wird die Lampe `Q5` aktiviert. 
- Wenn der Sensor `I2` aktiviert wird, wird die Lampe `Q7` aktiviert.
- Wenn der Schalter `I9` aktiviert wird, werden die Relais zurückgesetzt und die Lampen gehen wieder aus.

