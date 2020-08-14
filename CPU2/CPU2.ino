// Encoder pins.
int encoderA = 2;
int encoderB = 3;

// Encoder variables.
volatile unsigned int temp, counter = 0;
int actualState;
int lastState;

// Step motor pins.
int direction = 6;
int throttle = 7;
void ai1();
void ai2();
void setup (){

    Serial.begin(9600);
    Serial.print("Welcome to CEA Car");

    for(int a = 0; a < 15; a++){
        Serial.print("*");
    }
    Serial.println();
    
    // Encoder declaration
    pinMode(encoderA, INPUT_PULLUP);
    pinMode(encoderB, INPUT_PULLUP);

    // Encoder variable declaration
    attachInterrupt(encoderA, ai1, RISING);
    attachInterrupt(encoderA, ai2, RISING);

    // Step motor declaration
    pinMode(direction, OUTPUT);
    pinMode(throttle, OUTPUT);

    // Set up and runnning the stepper motor module
    digitalWrite (direction, HIGH);
}

void loop (){

// Send the value of counter
  if( counter != temp ){
    temp = counter;
    temp = map(temp,0,65533,100,0);
    Serial.println(temp);
    delay(1000);
  }
}
  void ai1() {
  // ai0 is activated if DigitalPin nr 2 is going from LOW to HIGH
  // Check pin 3 to determine the direction
  if(digitalRead(encoderA)==LOW) {
    counter++;
  } else{
    counter--;
  }
  }
   
  void ai2() {
  // ai0 is activated if DigitalPin nr 3 is going from LOW to HIGH
  // Check with pin 2 to determine the direction
  if(digitalRead(encoderB)==LOW) {
    counter--;
  } else{
    counter++;
  }
  }


    /*
    for (int i = 0; i < 200; i++){
        digitalWrite (throttle, HIGH);
        delay(1);
        digitalWrite(throttle,LOW);
        delay(1);
    }
    */
