//fonction qui bouge le servo
Servo Mservo;
void servoEmplacement(char direction) { //ne jamais atteindre un angle>120 (normalement 170)!!!!!!!
  if (direction <= 120) {
    Mservo.write(direction); delay(10);
  }
}

//fonction detecte les collisions
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
