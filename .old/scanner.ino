
#include <Servo.h>.

const int trig = 10;
const int echo = 11;
const int servo = 12;
int gauche = 120; //170
int droite = 60; //10
int milieu = 90;
int distanceAvantCollision = 30;
int distance = 0;      // Variable qui stockera la distance mesurée
Servo Mservo;

void servoEmplacement(char direction) { //ne jamais atteindre un angle>120 (normalement 170)!!!!!!!
  if (direction <= 120) {
    Mservo.write(direction); delay(10);
  }
}

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
  Mservo.attach(servo);
  Serial.begin(9600);

  Mservo.write(0); //position 0 du servo
  delay(1000);
}

void loop() {
  delay(1000);
  servoEmplacement(120);

}





boolean scan(char direction) {
  servoEmplacement(direction);
  //creation d'une impultion de 10 microseconde
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  distance = pulseIn(echo, HIGH) / 58;   //en cm distance = (duré de l'impultion/58)

  Serial.println(distance);
  delay(1000);
  if (distanceAvantCollision < distance) {
    return true;
  }
  else {
    return false;
  }
}
