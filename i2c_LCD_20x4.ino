#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
 lcd.begin ();
 lcd.setCursor(0,0);
 lcd.print("WWW.");
 lcd.setCursor(4,1);
 lcd.print("SINAU");
 lcd.setCursor(6,2);
 lcd.print("PROGAMMING");
 lcd.setCursor(16,3);
 lcd.print(".COM");
 }
void loop(){
}
