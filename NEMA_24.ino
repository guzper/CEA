
int DIR = 8;
int PUL = 9;

void setup (){

pinMode (DIR, OUTPUT);
pinMode (PUL, OUTPUT);



}

void loop (){

digitalWrite (DIR, HIGH);
for (int i= 0; i <200; i ++);
digitalWrite (PUL, HIGH);
delay(1);

digitalWrite(PUL,LOW);
delay(1);


}
