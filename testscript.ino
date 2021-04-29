#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "SenseBoxMCU.h"

int i;

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);
Button button_0(0);
BMP280 bmp_sensor;
HDC1080 hdc;
Lightsensor lightsensor;
VEML6070 veml;
BMX055 bmx;


  void printOnDisplay(String title1, String measurement1, String unit1, String title2, String measurement2, String unit2) {

    display.setCursor(0, 0);
    display.setTextSize(1);
    display.setTextColor(WHITE, BLACK);
    display.println(title1);
    display.setCursor(0, 10);
    display.setTextSize(2);
    display.print(measurement1);
    display.print(" ");
    display.setTextSize(1);
    display.println(unit1);
    display.setCursor(0, 30);
    display.setTextSize(1);
    display.println(title2);
    display.setCursor(0, 40);
    display.setTextSize(2);
    display.print(measurement2);
    display.print(" ");
    display.setTextSize(1);
    display.println(unit2);
  }



void setup() {
  senseBoxIO.powerI2C(true);
delay(2000);
display.begin(SSD1306_SWITCHCAPVCC, 0x3D);
display.display();
delay(100);
display.clearDisplay();
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(1, OUTPUT);
  button_0.begin();
  bmp_sensor.begin();
  hdc.begin();
  lightsensor.begin();
  veml.begin();
  bmx.beginAcc(0x3);

  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(1,HIGH);

}

void loop() {

if (button_0.wasPressed()) {
    i = (i + 1) % 5;
  }
  switch (i) {
  case 0:
       printOnDisplay("Luftdruck", String(bmp_sensor.getPressure()), "Pa", "Temperatur", String(bmp_sensor.getTemperature()), "°C");
    display.display();

  break;
  case 1:
       printOnDisplay("Temperatur", String(hdc.getTemperature()), "°C", "Luftfeuchtigkeit", String(hdc.getHumidity()), "%");
    display.display();

  break;
  case 2:
       printOnDisplay("Helligkeit", String(lightsensor.getIlluminance()), "Lux", "UV-Einstrahlung", String(veml.getUvIntensity()), "µW/cm²");
    display.display();

  break;
  case 3:
       printOnDisplay("Accelerometer X", String(bmx.getAccelerationX()), " N", "Accelerometer Total", String(bmx.getAccelerationTotal()), "N");
    display.display();

  break;
  case 4:
      display.drawCircle(32,20,10,1);
      display.drawCircle(96,20,10,1);
      display.fillRect(49,40,30,2,1);
      display.fillRect(48,39,2,2,1);
      display.fillRect(47,38,2,2,1);
      display.fillRect(46,37,2,2,1);
      display.fillRect(79,39,2,2,1);
      display.fillRect(80,38,2,2,1);
      display.fillRect(81,37,2,2,1);
      display.setCursor(38,50);
      display.setTextSize(1);
      display.setTextColor(WHITE,BLACK);
      display.println("JuniorUni");
    display.display();

  break;
  }
  display.clearDisplay();

}