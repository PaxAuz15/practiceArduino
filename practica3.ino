/*UNIVERSIDAD LAICA ELOY ALFARO DE MANABI
 Facultad de Ciencias Informaticas
 Ingenieria de SIstemas
 
 PRACTICA No. 3

Control de varios leds
*/

int L1 = 4;
int L2 = 5;
int L3 = 6;
int L4 = 7;
int L5 = 8;
int L6 = 9;
int L7 = 10;
//int LED = [];
int retardo = 200;

void setup(){
  pinMode(L1,OUTPUT);
  pinMode(L2,OUTPUT);
  pinMode(L3,OUTPUT);
  pinMode(L4,OUTPUT);
  pinMode(L5,OUTPUT);
  pinMode(L6,OUTPUT);
  pinMode(L7,OUTPUT);
}

void loop(){
 digitalWrite(L1, 1);
 digitalWrite(L2, 1);
 digitalWrite(L3, 1);
 digitalWrite(L4, 1);
 digitalWrite(L5, 1);
 digitalWrite(L6, 1);
 digitalWrite(L7, 1);
 delay(retardo);
 digitalWrite(L1, 0);
 digitalWrite(L2, 0);
 digitalWrite(L3, 0);
 digitalWrite(L4, 0);
 digitalWrite(L5, 0);
 digitalWrite(L6, 0);
 digitalWrite(L7, 0);
 delay(retardo);
}
