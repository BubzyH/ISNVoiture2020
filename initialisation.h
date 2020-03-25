void initialisation(){
//mode pin
//recepteur IR
pinMode(IRGauche, INPUT);
pinMode(IRDroit, INPUT);
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
