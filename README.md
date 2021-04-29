# SenseBox Testscript
Ein Testprogramm für alle Funktionen des SenseBox Edu Kits

## Ziel
Nach einem Programmierkurs mit der SenseBox müssen alle Bauteile nach Vollständigkeit und Funktionalität überprüft werden.
Mit dem einfachen SenseBox Testprogramm werden aktuell folgende Bauteile und Funktionen getestet ohne, dass Sie ein eigenes komplexes Skript schreiben müssen:
- HDC1080: Temperatur, Luftfeuchtigkeit
- BMP280: Temperatur, Luftdruck
- VEML+TSL: Helligkeit, UV-Einstrahlung
- OLED-Display: Text, Rechtecke und Kreise
- Beschleunigungssensor
- LEDs: interne, externe

## Test durchführen
Um die SenseBox zu testen muss die SenseBox erst aufgebaut, das Script installiert und dann die Tests der Funktionen geprüft werden.

### Aufbau

#### SenseBox
Sie benötigen die SenseBox, ein Mini-USB Kabel und ein Computer.

|                     SenseBox-Board                      |              Mini USB-Kabel               |
| :-----------------------------------------------------: | :---------------------------------------: |
| ![SenseBox-Board](./Bilder/sensebox_mcu_breadboard.png) | ![Mini USB-Kabel](./Bilder/USB_cable.png) |

#### Sensoren und Display
Zum Anschluss der Sensoren verwenden wir ausschließlich die Kabel mit doppeltem Stecker.
Wir brauchen folgende Teile:
|             Stecker              |             HDC1080              |             BMP280             |              VEML+TSL              |                OLED-Display                |
| :------------------------------: | :------------------------------: | :----------------------------: | :--------------------------------: | :----------------------------------------: |
| ![Stecker](./Bilder/stecker.png) | ![HDC1080](./Bilder/hdc1080.png) | ![BMP280](./Bilder/bmp280.png) | ![VEML+TSL](./Bilder/veml_tsl.png) | ![OLED-Display](./Bilder/oled_display.png) |

Alle Sensoren müssen an ein I2C Port angeschlossen werden. Es gibt 5 solcher Ports, die Reihenfolge und welcher verwendet wird spielt keine Rolle.

|                Schema für ein Sensoren                |       Alle Sensoren angeschlossen       |
| :---------------------------------------------------: | :-------------------------------------: |
| ![Schema für ein Sensor](./Bilder/sensor_example.png) | ![Alle Sensoren](./Bilder/sensoren.png) |

#### LEDs
Zur Einfachheit schließen wir lediglich eine einzelne LED an, testen aber alle LEDs **nacheinander** durch austauschen.

**Bauteile:**
|         Stecker zu Pins         |                         LEDs                         |         Widerstand (Gelb-Lila-Braun-Gold)         |
| :-----------------------------: | :--------------------------------------------------: | :-----------------------------------------------: |
| ![](./Bilder/stecker_kabel.png) | ![Schema zum Anschluss einer LED](./Bilder/leds.png) | ![So siehts in echt aus](./Bilder/widerstand.png) |
Wichtig! Beim Widerstand muss der Farbcode stimmen! Er ist Gelb-Lila-Braun-Gold

**Anschluss**
|                            Schema                             |                            Realität                            |
| :-----------------------------------------------------------: | :------------------------------------------------------------: |
| ![Schema zum Anschluss einer LED](./Bilder/led_anschluss.png) | ![So siehts in echt aus](./Bilder/led_anschluss_realitaet.png) |
Das lange Beinchen der LED ist hier mit einem kleinen Knick illustriert.
1. Stecker in SenseBox an **Port Digital A** (in Schriftrichtung ganz oben links) einstecken
2. Schwarzes Kabel an A3 auf Steckbrett einstecken
3. Eine LED mit dem kurzen Beinchen an E3 und mit dem langen Beinchen an E4 einstecken. (Am einfachsten gehts mit dem langen zuerst einstechen und dann mit dem kurzen nachziehen)
4. Körper des Widerstands mit zwei Fingern der selben Hand greifen und mit der anderen Hand runter biegen. Gleiches für die andere Seite, damit der Widerstand wie auf dem Bild oben aussieht.
5. Widerstand in C4 und C8 stecken.
6. Grünes Kabel in A8 stecken
7. Überprüfen ob alles richtig eingesteckt ist. Alle Bauteile sollten gerade stehen können

Das gelbe und rote Kabel ist ungenutzt und kann ignoriert werden.

Später werden wir die LED im Betrieb einfach rausnehmen und durch eine andere ersetzen, um alle zu testen.

#### Vollständiger Aufbau


### Installation
Sobald die SenseBox vollständig aufgebaut und mit dem PC verbunden wurde muss das Testprogramm übertragen werden.
Nun muss an der SenseBox der **rote "Reset" Button schnell zwei mal hintereinander gedrückt werden**. Die SenseBox sollte sich nun **trennen** **und** nach kurzer Zeit **erneut** **mit** dem **PC verbinden**. Der PC sollte nun Speicherzugriff auf die SenseBox vergleichbar mit einem USB-Stick haben. (Eventuell hat sich das entsprechende Fenster geöffnet).
Nun kopieren wir die "**testscript.bin**" Datei auf die SenseBox. Kurz danach sollte sich die SenseBox **automatisch trennen und neustarten**.
Die **Installation** ist damit **abgeschlossen**!

### Tests

Nun beginnt das eigentliche Testen!

#### Display 