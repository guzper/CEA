#include <Stepper.h>

#define STEP 8
#define DIR 9

void setup (){ 


pinMode (STEP, OUTPUT);
pinMode (DIR, OUTPUT);

}

void loop (){ 

delay (100);
digitalWrite(DIR, LOW); 
for (int i = 0; i<1000; i++){
  digitalWrite(STEP, LOW);
  delay(1); 
  digitalWrite(STEP, HIGH);
  
}

delay (100);
digitalWrite(DIR, HIGH); 
for (int i = 1000; i>0; i--){
  digitalWrite(STEP, LOW);
  delay(1); 
  digitalWrite(STEP, HIGH);
  
}
}
