
//driver moteur 1.1

//2124 octets (6%) de l'espace de stockage de programmes.
//198 octets (9%) de mémoire dynamique

//define pin
//Moteur
#define moteurG 4  //enA pin 4
#define GM 2 //moteur gauche move  in1 pin 2
#define GB 3 //moteur gauche back  in2 pin 3
#define moteurD 7  //enB pin
#define DM 6 //moteur gauche move  in3 pin
#define DB 5 //moteur gauche back  in4 pin

//fonction rotation Moteur
// 1=avancer 0=reculer moteur droit ou gauche
void rotation(int rotDirection, char moteur) {
  int M;
  int B;
  if (moteur = "gauche") {
    M = GM;
    B = GB;
  }
  else if (moteur = "droit") {
    M = DM;
    B = DB;
  }
  //avancer
  if (rotDirection == 0) {
    digitalWrite(M, HIGH);
    digitalWrite(B, LOW);
    delay(20);
  }
  //reculer
  else {
    digitalWrite(M, LOW);
    digitalWrite(B, HIGH);
    delay(20);
  }
}

void setup() {
  //mode pin
  //moteur
  pinMode(moteurG, OUTPUT);
  pinMode(GM, OUTPUT);
  pinMode(GB, OUTPUT);
  pinMode(moteurD, OUTPUT);
  pinMode(DM, OUTPUT);
  pinMode(DB, OUTPUT);
  // Set initial rotation direction
  digitalWrite(GM, LOW);
  digitalWrite(GB, HIGH);
  digitalWrite(DM, LOW);
  digitalWrite(DB, HIGH);
  //debug
  Serial.begin(9600);
}

void loop() {
  //teste
  rotation(1, "gauche");
  rotation(1, "droit");
  //fin test

  
  //vitesse moteur Gauche et Droite ?
  // value from 75 (3v) to 255(6v), under 75 -> stop
  int speedG = 255;
  int speedD = 255;

  //récuperer donner bluthooth vitesse:

  //vitesse des moteurs: /!en fin de code!
  if (speedG < 75) {
    speedG = 0;
  }
  if (speedD < 75) {
    speedD = 0;
  }

  analogWrite(moteurG, speedG); // Send PWM signal to L298N enA  pin
  analogWrite(moteurD, speedD); // Send PWM signal to L298N enB  pin

}
