#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27 , 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
// Ubah alamat 0x27 dengan alamat i2c kamu

void setup() {
  lcd.begin (16,2); // LCD untuk ukuran 16x2
}

void loop() {
  lcd.setCursor(0, 0); // baris pertama, 0 Pertama = karakter pertama, 0 kedua = baris ke-1
  lcd.print("SELAMAT DATANG");
  lcd.setCursor(0, 1); // baris kedua, 0 Pertama = karakter pertama, 1 = baris ke-2
  lcd.print("RAFIQUL HAKIM");
}