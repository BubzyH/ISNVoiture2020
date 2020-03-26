#include<SoftwareSerial.h>

SoftwareSerial HC06(11,10);
String messageRecu;

 void setup() {
  Serial.begin(9600);
  HC06.begin(9600);  
}

void loop() {

    if(HC06.available())
    {
      delay(3);
      messageRecu = HC06.read();
    }
    if (messageRecu.length() >0)
    {
      Serial.println(messageRecu);
      messageRecu="";
    }
}
