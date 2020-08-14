// Encoder pins.
int encoderA = 2;
int encoderB = 3;

// Encoder variables.
int counter = 0;
int actualState;
int lastState;

// Step motor pins.
int direction = 6;
int throttle = 7;

void Encoder(){
    
    actualState = digitalRead(encoderA); // Reads the "current" state of the outputA
   
   // If the previous and the current state of the outputA are different, that means a Pulse has occured

   if (actualState != lastState){
       // If the outputB state is different to the outputA state, that means the encoder is rotating clockwise
       if (digitalRead(encoderB) != actualState) {
           counter++;
       }
       else{
           counter--;
       }
   }

   while(true){
       Serial.print("The encoder value is: ");
       Serial.print(counter);
       c
       Serial.println();
       delay(1000);
   }

   lastState = actualState; // Updates the previus state of the outputA with the current value;
}

/*
void direction(){
    
   
}
*/

void setup (){

    Serial.begin(9600);
    Serial.print("Welcome to CEA Car");

    for(int a = 0; a < 15; a++){
        Serial.print("*")
    }
    Serial.println();
    
    // Encoder declaration
    pinMode(encoderA, INPUT);
    pinMode(encoderB, INPUT);

    // Encoder variable declaration
    lastState = digitalRead(encoderA);

    // Step motor declaration
    pinMode(direction, OUTPUT);
    pinMode(throttle, OUTPUT);

    // Set up and runnning the stepper motor module
    digitalWrite (direction, HIGH);
}

void loop (){



    /*
    for (int i = 0; i < 200; i++){
        digitalWrite (throttle, HIGH);
        delay(1);
        digitalWrite(throttle,LOW);
        delay(1);
    }
    */
}
