int A = 2;
int B = 3;

int ANTERIOR = 0;
volatile int POSICION= 0;

void setup(){

pinMode(A, INPUT);
pinMode(B, INPUT);

Serial.begin (9600);

attachInterrupt(digitalPinToInterrupt(A), encoder, LOW);

Serial.println ("VOLANTE LISTO")

}

void loop(){

if (digitalRead(B) == HIGH){

  POSICION++;
}

else{
  POSICION --;

}


}



}
