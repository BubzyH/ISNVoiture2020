//VERSION 1.1
void initialisation() {
  //mode pin

  //IR
  pinMode(IRGauche, INPUT_PULLUP);
  pinMode(IRDroit, INPUT_PULLUP);
  //moteur
  pinMode(moteurGauche, OUTPUT);
  pinMode(gaucheMove, OUTPUT);
  pinMode(gaucheBack, OUTPUT);
  pinMode(moteurDroit, OUTPUT);
  pinMode(droiteMove, OUTPUT);
  pinMode(droiteBack, OUTPUT);
  // Set initial rotation direction  //A CHANGER POUR INVERSER LES POLES
  digitalWrite(gaucheMove, LOW);
  digitalWrite(gaucheBack, HIGH);
  digitalWrite(droiteMove, LOW);
  digitalWrite(droiteBack, HIGH);
  //scan
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Servo Mservo;
  Mservo.attach(servo);
  Mservo.write(0); //position 0 du servo
  delay(1000);
  //debug
  Serial.begin(9600);

}
