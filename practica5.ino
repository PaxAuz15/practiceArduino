/*UNIVERSIDAD LAICA ELOY ALFARO DE MANABI
 Facultad de Ciencias Informaticas
 Ingenieria de SIstemas
 
 PRACTICA No. 5

Control de varios leds
*/

int led = 2;
int pulsador = 11;
int pulso = 0;


void setup(){
  pinMode(led,OUTPUT);
  pinMode(pulsador, INPUT);

}

void loop(){
  pulso = digitalRead(pulsador);
  if (pulso == 1){
    digitalWrite(led,1);
  }
  else{
    digitalWrite(led, 0);
  }
  
}
