#include <elapsedMillis.h>

elapsedMillis timeElapsed; //declare global if you don't want it reset every time loop runs

//Delcaring the button and LED Pins
#define button1Pin 9
#define led1Pin 13
#define led2Pin 12
int onoff=0;//0 lights are off 1 light are on
void setup() {
 
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(button1Pin, INPUT);
  Serial.begin(115200); 
}
void loop() {
  if (digitalRead(button1Pin) == LOW) {
    // turn LEDS on:
    Serial.println("on");
    digitalWrite(led1Pin, HIGH); 
    digitalWrite(led2Pin, HIGH);
    onoff=1; 
  } else if(digitalRead(button1Pin)==HIGH) {
    // turn LEDs off:
    if(onoff==1){
      digitalWrite(led1Pin, LOW);
      digitalWrite(led2Pin, LOW);
      onoff=0; 
      timeElapsed=0;//reset timer to 0
    }
    if(timeElapsed<1000){//if less than a second has elaped turn first led on
        digitalWrite(led1Pin, HIGH);   // turn the LED on (HIGH is the voltage level)
      }
    if(timeElapsed>1000 && timeElapsed<2000){ // if more than a second has passed and less than 2 turn led 1 off and turn led 2 on
        digitalWrite(led1Pin, LOW);    // turn the LED off by making the voltage LOW
        digitalWrite(led2Pin, HIGH);   // turn the LED on (HIGH is the voltage level)
      }
     if(timeElapsed>2000){            // // if more than a 4 seconds have passed turn led 4 off and reset the timer to 0
        digitalWrite(led2Pin, LOW);    // turn the LED off by making the voltage LOW
        timeElapsed=0;  //Set timer to 0
     }
      
  }
}
