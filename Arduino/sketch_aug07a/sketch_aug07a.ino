#include <Stepper.h>

//Conexiones EasyDriver
#define step_pin 9  //Pin 9 conectado al Pin Steps
#define dir_pin 8   //Pin 8 conectado al Pin Direction

volatile boolean VueltaDetectada;   //Se necesita volatile para interrupciones
volatile boolean DireccionRotacion; //Rotación Derecha (sentido horario) o Izquierda (sentido anti-horario)

//Conexiones Encoder
const int PinCLK = 2; //Generación de interrupciones utilizando la Señal CLK
const int PinDT = 3;  //Lectura para Señal DT


int PosicionMpp = 0;    //Almacena la Posición del MPP
int PasosRecorrido = 4; //Controla la velocidad del MPP por Rotació

int Direccion;  //Variable para setear la Rotación (Derecha o Izquierda) del MPP

void DeteccionRotacion()
{
  delay(4); //Retardo para Rebote
  if(digitalRead(PinCLK))
    DireccionRotacion = digitalRead(PinDT);
  else
    DireccionRotacion = !digitalRead(PinDT);
  VueltaDetectada = true;
}

void setup()
{
  pinMode(dir_pin, OUTPUT);
  pinMode(step_pin, OUTPUT);
  pinMode(PinCLK, INPUT); //Setea Pin a Entrada
  pinMode(PinDT, INPUT);
  attachInterrupt(0, DeteccionRotacion, FALLING); //Interrupción 0 siempre conectado al Pin 2 en Arduino UNO
}
