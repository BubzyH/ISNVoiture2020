//driver IR 1.0

//2036 octets (6%) de l'espace de stockage 
//222 octets (10%) de mémoire dynamique

//define pin
#define IRG 10 //recepteur ir gauche
#define IRD 11 //recepteur ir droit

//fonction capteur ir
int ir(){
  int detect=5;
  if(digitalRead(IRG)==HIGH){
  Serial.println("Detecteur gauche!");
  detect=1;
}

if(digitalRead(IRD)==HIGH){
  Serial.println("Detecteur droit!");
  if(detect=1){ detect=2;}
  else{ detect=-1;}
}
return detect;
}
//int detect=ir();
//1= detecte a gauche
//-1= detecte a droite
//2= les deux detectes
void setup() {
//definir pin
pinMode(IRG,INPUT);
pinMode(IRD,INPUT);
Serial.begin(9600);

}

void loop() {

int detect=ir();

delay(500);
}
