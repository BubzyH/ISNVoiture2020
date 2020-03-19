//driver 1.1
int ir(){
  int detect=0;
  if(digitalRead(IRGauche)==HIGH){
  Serial.println("Detecteur gauche!");
  detect=1;
}

if(digitalRead(IRDroit)==HIGH){
  Serial.println("Detecteur droit!");
  if(detect=1){ detect=2;}
  else{ detect=-1;}
}
return detect;
}
