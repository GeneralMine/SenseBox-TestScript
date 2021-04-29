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

Wir schließen alle Sensoren an egal welchen Port unter der I2C Sektion an. Am Ende sollen alle 4 angeschlossen sein.

|                Schema für ein Sensoren                |       Alle Sensoren angeschlossen       |
| :---------------------------------------------------: | :-------------------------------------: |
| ![Schema für ein Sensor](./Bilder/sensor_example.png) | ![Alle Sensoren](./Bilder/sensoren.png) |

#### LEDs

### Installation

### Tests

#### Display 