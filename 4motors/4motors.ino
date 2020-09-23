int pin1 = 5;
int pin1_r=6;
int pin2 = 9;
int pin2_r=10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600) ; 
  pinMode(pin1,OUTPUT);
  pinMode(pin1_r,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin2_r,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  char dir='f';
  dir = Serial.read();
  switch(dir)
  {
    case 'f':
      digitalWrite(pin1,HIGH);
      digitalWrite(pin1_r,LOW);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin1_r,LOW);
  
    case 'b':
      digitalWrite(pin1,LOW);
      digitalWrite(pin1_r,HIGH);
      digitalWrite(pin2,LOW);
      digitalWrite(pin2_r,HIGH);
      

   case 'l':
      digitalWrite(pin1_r,LOW);
      digitalWrite(pin1,LOW);
      digitalWrite(pin2_r,HIGH);
      digitalWrite(pin2,LOW);

   case 'r':
      digitalWrite(pin1,HIGH);
      digitalWrite(pin1_r,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin2_r,LOW);

   case 'c':
      digitalWrite(pin1,HIGH);
      digitalWrite(pin1_r,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin2_r,HIGH);
  }
}
