/*
  I2C ARDUINO
  RAFIQUL HAKIM
  065117002
  24 SEPTEMBER 2018
  17:55 WIB
 */

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27 , 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
// Ubah alamat 0x27 dengan alamat i2c kamu
 
 void setup() {
  // put your setup code here, to run once:
  lcd.begin (16, 2); //LCD untuk ukuran 16x2
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(2, 0); //baris pertama
  lcd.print("TEST LCD i2C");
  lcd.setCursor(4, 1); //baris kedua
  lcd.print("BY VCOOL");
}
