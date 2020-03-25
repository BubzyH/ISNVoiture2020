//driver 1.2
void rotation(int rotDirection, char moteur) { //0= avancer 1=reculer gauche/droit
  int Move; //move
  int back; //back

  //choix des pin du moteur (gauche ou droit)
  if (moteur = "gauche") {
    Move = gaucheMove;
    back = gaucheBack;
  }
  else if (moteur = "droit") {
    Move = droiteMove;
    back = droiteBack;
  }
//actions  
  //avancer
  if (rotDirection == 0) {
    digitalWrite(Move, HIGH);
    digitalWrite(back, LOW);
    delay(20);
  }
  //reculer
  else {
    digitalWrite(Move, LOW);
    digitalWrite(back, HIGH);
    delay(20);
  }
}
