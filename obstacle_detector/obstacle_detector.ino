const int echopin = 12; 
const int trigpin = 13;
long duration;
int distance;
int pin1 = 5;
int pin1_r=6;
int pin2 = 9;
int pin2_r=10;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(pin1,OUTPUT);
  pinMode(pin1_r,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin2_r,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(trigpin,LOW);
   delayMicroseconds(2); 
   digitalWrite(trigpin,HIGH);
   delayMicroseconds(10);
   digitalWrite(trigpin,LOW); 
   duration = pulseIn(echopin,HIGH);
   distance = duration*0.034/2; 
   if(distance <= 20)
   {
      digitalWrite(pin1,HIGH);
      digitalWrite(pin1_r,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin2_r,LOW);
   }
   else
   {
      digitalWrite(pin1,HIGH);
      digitalWrite(pin1_r,LOW);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin1_r,LOW);
   }
}
