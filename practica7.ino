/*UNIVERSIDAD LAICA ELOY ALFARO DE MANABI
 Facultad de Ciencias Informaticas
 Ingenieria de SIstemas
 
 PRACTICA No. 7

Control de varios leds
*/

int L1 = 4;
int L2 = 5;
int L3 = 6;
int L4 = 7;
int L5 = 8;
int L6 = 9;
int L7 = 10;
int led = 2;
int retardo = 50;
int pulsador1 = 11;
int pulso1 = 0;
int pulsador2 = 12;
int pulso2 =0;

void setup(){
  pinMode(L1,OUTPUT);
  pinMode(L2,OUTPUT);
  pinMode(L3,OUTPUT);
  pinMode(L4,OUTPUT);
  pinMode(L5,OUTPUT);
  pinMode(L6,OUTPUT);
  pinMode(L7,OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(pulsador2, INPUT);
  pinMode(pulsador1, INPUT);
}

void loop(){
 pulso1 = digitalRead(pulsador1);
 pulso2 = digitalRead(pulsador2);
  if (pulso1 == 1 && pulso2 ==0){
   digitalWrite(led,1);
   digitalWrite(L4, 1);
   delay(retardo);
   digitalWrite(L4, 0);
   digitalWrite(L3, 1);
   digitalWrite(L5, 1);
   delay(retardo);
   digitalWrite(L3, 0);
   digitalWrite(L5, 0);
   digitalWrite(L2, 1);
   digitalWrite(L6, 1);
   delay(retardo);
   digitalWrite(L2, 0);
   digitalWrite(L6, 0);
   digitalWrite(L1, 1);
   digitalWrite(L7, 1);
   delay(retardo);
   digitalWrite(L1, 0);
   digitalWrite(L7, 0);
   delay(retardo);
  }
  else{
    if (pulso1==0 && pulso2==1){
       digitalWrite(led,1);
       digitalWrite(L7, 1);
       digitalWrite(L1,1);
       delay(retardo);
       digitalWrite(L7, 0);
       digitalWrite(L1, 0);
       digitalWrite(L6, 1);
       digitalWrite(L2,1);
       delay(retardo);
       digitalWrite(L6,0);
       digitalWrite(L2,0);
       digitalWrite(L5,1);
       digitalWrite(L3,1);
       delay(retardo);
       digitalWrite(L5,0);
       digitalWrite(L3,0);
       digitalWrite(L4,1);
       delay(retardo);
       digitalWrite(L4,0);
       digitalWrite(led,0);
    }
    else{
    }
  }
 
}
