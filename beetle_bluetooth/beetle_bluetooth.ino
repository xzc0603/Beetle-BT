#include <SoftwareSerial.h>

SoftwareSerial BTSerial(0, 1);   //bluetooth module Tx:Digital A1 Rx:Digital A0

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode (0, INPUT_PULLUP);
  pinMode (1, OUTPUT);
}

void loop() {
  if (Serial1.available())
    Serial.write(Serial1.read());
  
  if (Serial.available())
    Serial1.write(Serial.read());

}
