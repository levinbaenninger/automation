# Schaltungen

ES gibt bei Schaltungen bei verschiedene logische Verknüpfungen. Darunter die **UND-Schaltung**, die **ODER-Schaltung**, etc. Es gibt aber auch Schaltungen mit einem Relais, um bspw. eine Selbsthaltung

## Verknüpfungen

### UND-Schaltung 

Bei UND-Schaltungen müssen zwei Schalter gleichzeitig gedrückt werden. Zum Beispiel:

![und-schaltung.png](und-schaltung.png) { width="500" thumbnail="true" }

### ODER-Schaltung

Bei ODER-Schaltungen muss mindestens ein Schalter gedrückt werden. Zum Beispiel:

![oder-schaltung.png](oder-schaltung.png) { width="500" thumbnail="true" }

### NAND-Schaltung

Die NAND-Schaltung kehrt die UND-Schaltung um. D.h. wenn kein Schalter oder nur einer gedrückt wird, leuchtet die Lampe, wenn beide gedrückt werden, dann ist die Lampe aus.

![nand-schaltung.png](nand-schaltung.png) { width="500" thumbnail="true" }

### NOR-Schaltung

Auch die NOR-Schaltung dreht einfach die Logik der OR-Schaltung um. Wenn nur ein Schalter gedrückt wird, dann geht die Lampe aus.

![nor-schaltung.png](nor-schaltung.png) { width="500" thumbnail="true" }

## Schaltungen mit Relais

Bei Schaltungen mit einem Relais kann man bspw. eine Selbsthaltung realisieren.

### Selbsthaltung

![selbsthaltung.png](selbsthaltung.png) { width="500" thumbnail="true" }

Wenn wir hier `S2` drücken wird das Relais `K1` aktiviert, somit schliesst sich der Stromkreis und `P1` leuchtet. `P1` bleibt auch aktiv, wenn `S2` nicht mehr gedrückt wird. 

Wenn aber `S1` gedrückt wird, wird der Stromkreis unterbrochen und `K1` wird deaktiviert.

### Zeitverzögerung

Mit Zeitverzögerungen kann man bestimmen, wie lange es warten soll, bis etwas geschieht.

#### Anzugsverzögerung
 
![anzugsverzögerung.png](anzugsverzögerung.png) { width="500" thumbnail="true" }

Bei der Anzugsverzögerung wird eine bestimmte Zeit gewartet, bis bspw. `P1` aktiviert wird.
 
#### Abfallverzögerung

![abfallverzögerung.png](abfallverzögerung.png) { width="500" thumbnail="true" }

Bei der Abfallverzögerung wird eine bestimmte Zeit gewartet, bis bspw. `P1` deaktiviert wird.

### Verriegelung

![verriegelung.png](verriegelung.png) { width="500" thumbnail="true" } 

Hier kann nur eine Lampe aktiv sein. Um die andere einzuschalten, muss zuerst die andere mit `S1` ausgeschaltet werden.

Um das Relais `K1` zu aktivieren, muss `K2` deaktiviert sein und andersrum. 
