//driver 1.2
int ir(){
  int detect=0;
  digitalRead(IRGauche);
  if(digitalRead(IRGauche)==HIGH){  //changer en low si detecte juste le noir
//  Serial.println("Detecteur gauche!");
  detect=1;
}

if(digitalRead(IRDroit)==HIGH){   //changer en low si detecte juste le noir
//  Serial.println("Detecteur droit!");
  if(detect=1){ detect=2;}
  else{ detect=-1;}
}
return detect;
}
