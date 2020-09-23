
#define button1Pin 9
#define led1Pin 13
#define led2Pin 12
int onoff=0;//0 lights are off 1 light are on
void setup() {
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(button1Pin, INPUT);
  Serial.begin(9600);
  
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
      
    }
     digitalWrite(led1Pin, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(1000);            // wait for a second
        digitalWrite(led1Pin, LOW);    // turn the LED off by making the voltage LOW
        digitalWrite(led2Pin, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(1000);         // wait for a second
        digitalWrite(led2Pin, LOW);    // turn the LED off by making the voltage LOW
      
     
     }
}
