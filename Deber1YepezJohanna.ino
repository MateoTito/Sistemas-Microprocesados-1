/*
 *  Nombre: Johanna Yépez
 *  Deber: 1
 *  1.- Realizar un juego de luces que se prendan secuencialmente los leds impares (1,3,5). 
 *  2.- Realizar un programa que se enciendan uno por uno los leds pares (0,2,4). 
 *  3.- Realizar un juego que se enciendan y apaguen los leds de forma aleatoria.
 */
int v[6]={8,9,10,11,12,13}; //declaramos un vector
int i=0; //declaramos una variable igual a 0
long r; //declaramos la variable r como long
void setup() {
  for(;i<6;i++){ //recorremos el vector
    pinMode(v[i],OUTPUT); //asignamos como puerto de salida
  }
  i=0; //reinicio de variable
  randomSeed(42); //generador de números aleatorios
}

void loop() {
  i=0;
  for(;i<6;i++){ //iniciamos ciclo encendido de impares
    digitalWrite(v[i+1],HIGH); //Encedemos el led en la posición i+1
    delay(200); //espera
    i=i+1; //forzamos a la variable a aumentar en 1 para tomar valores impares
  }
  i=5;
  for(;i>=0;i--){ //iniciamos ciclo apagado de impares
    digitalWrite(v[i+1],LOW); //apagamos el led i+1 en forma descendente
    delay(200); //espera
  }
  i=0; //retornamos a valor inicial de la variable
  for(;i<6;i++){ //iniciamos ciclo de encendido y apagado pares
    digitalWrite(v[i],HIGH); //encendido posición i
    delay(200); //espera
    digitalWrite(v[i],LOW); //apagado posición i
    delay(200); //espera
    i=i+1; //aumentamos en 1 unidad para tomar solo pares
  }
  r=random(8,14); //damos valor aleatorio a la variable r(long)
  delay(200); //espera 
  digitalWrite(r,HIGH); //encendemos led al azar
  delay(200); //espera
  digitalWrite(r,LOW); //apagamos led al azar
  delay(300); //espera
}
