#include <SoftwareSerial.h>

SoftwareSerial hc05(2,3);

void setup(){
  //Initialize Serial Monitor
  Serial.begin(9600);
  Serial.println("ENTER AT Commands:");
  //Initialize Bluetooth Serial Port
  hc05.begin(9600);
}

void loop(){
  //Write data from HC06 to Serial Monitor
  if (hc05.available()){
    Serial.write(hc05.read());
  }
  
  //Write from Serial Monitor to HC06
  if (Serial.available()){
    hc05.write(Serial.read());
  }  
}
