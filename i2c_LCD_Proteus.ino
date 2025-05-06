#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x20 ,2,1,0,4,5,6,7,3, POSITIVE); //0x20 adalah alamat i2c PCF8574 di proteus
   
void setup() {
  lcd.begin(16, 2);
  lcd.backlight();
  lcd.print("Berbagi Ilmu");
}

void loop()
{
}
