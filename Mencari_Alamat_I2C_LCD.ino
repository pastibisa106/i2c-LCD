#include <Wire.h>

void setup() {
    Serial.begin (9600);
    while (!Serial) {
    }
    Serial.println ();
    Serial.println ("Mencari alamat I2C ...");
    byte count = 0;

    Wire.begin();
    for (byte i = 8; i <120; i++) {
        Wire.beginTransmission (i);
        if (Wire.endTransmission () == 0) {
            Serial.println ("Yey, Dapat!");
            Serial.print ("Alamatnya adalah: ");
            Serial.print ("0x");
            Serial.println (i, HEX);
            count++;
            delay (1);  
        }
    }
    Serial.println ("Selesai.");
    Serial.print ("Dapat ");
    Serial.print (count, DEC);
    Serial.println (" Perangkat.");
}
void loop() {
}
