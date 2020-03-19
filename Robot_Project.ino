#include "Arduino.h"
#include "pin.h"//define pin
#include "initialisation.h"
#include "moteur.h" //fonction
#include "IR.h" //fonction

int mode =1; //0 = conduite, 1 = ir, 2  = ultrason

void setup() {
 initialisation();
}

void loop() {
  
if(mode==0){

   //vitesse moteur Gauche et Droite ?
  // value from 75 (3v) to 255(6v), under 75 -> stop
  int speedGauche = 255;
  int speedDroit = 255;

  //récuperer donner bluthooth vitesse:

  //vitesse des moteurs: /!en fin de code!
  if (speedGauche < 75) {
    speedGauche = 0;
  }
  if (speedDroit < 75) {
    speedDroit = 0;
  }

  analogWrite(moteurGauche, speedGauche); // Send PWM signal to L298N enA  pin
  analogWrite(moteurDroit, speedDroit); // Send PWM signal to L298N enB  pin

}

if(mode==1){

  int detect =ir();
}
}
