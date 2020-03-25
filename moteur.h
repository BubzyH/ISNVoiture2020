//driver 1.3

//0= avancer 1=reculer gauche/droit
void rotation(int rotDirection, char moteur) {
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
//!fonction en fin de code!
//vitesse moteur Gauche et Droite ?
void moteurSpeed(int speedGauche, int speedDroit) {   // value from 75 (3v) to 255(6v), under 75 -> stop

  //protection
  if (speedGauche < 75) {
    speedGauche = 0;
  }
  if (speedDroit < 75) {
    speedDroit = 0;
  }

  analogWrite(moteurGauche, speedGauche); // Send PWM signal to L298N enA  pin
  analogWrite(moteurDroit, speedDroit); // Send PWM signal to L298N enB  pin

}
