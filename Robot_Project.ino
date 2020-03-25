//Le croquis utilise 2812 octets (8%) de l'espace de stockage
//Les variables globales utilisent 225 octets (10%)

//VERSION 1.1
#include "Arduino.h"
#include <Servo.h>
#include "pin.h"//pin
#include "variable.h"//variables
#include "initialisation.h"//role des pins
#include "moteur.h" //fonction
#include "IR.h" //fonction
#include "scan.h"//fonctions

void setup() {
  initialisation();
}

void loop() {

  if (mode == 0) {
  }

  if (mode == 1) {
    int detect = ir();
  }
  if (mode == 2) {
  }
}
