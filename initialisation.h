//VERSION 1.0
void initialisation(){
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
//debug
Serial.begin(9600);

}
