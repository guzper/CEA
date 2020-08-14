// Step motor pins.
int DIR = 8;
int PUL = 9;

void setup (){

    pinMode (DIR, OUTPUT);
    pinMode (PUL, OUTPUT);

    // Set up and runnning the stepper motor module
    digitalWrite (DIR, HIGH);
}

void loop (){

    for (int i = 0; i < 200; i++){
        digitalWrite (PUL, HIGH);
        delay(1);
        digitalWrite(PUL,LOW);
        delay(1);

          delay (100);

          for (int i = 200; i<200; i--);
          digitalWrite(PUL, LOW);
          delay(1);
          digitalWrite(PUL,HIGH);
          delay(100);
    }
}
