int A = 2;
int B = 3;
int encoder = 0;
int ANTERIOR = 0;
volatile int POSICION= 50;

void setup(){

pinMode(A, INPUT);
pinMode(B, INPUT);
Serial.begin (9600);
Serial.println(POSICION);
attachInterrupt(digitalPinToInterrupt(A), encoder, LOW);

Serial.println ("VOLANTE LISTO");

}

void loop(){
Serial.println(POSICION);
if (digitalRead(B) == HIGH){

  POSICION++;
}
else{
  POSICION --;

}
}
