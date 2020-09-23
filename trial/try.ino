int pin1=9;
int pin2=13;
void setup() {
  pinMode(9,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(pin1,HIGH);
  delay(1000);
  digitalWrite(pin1,LOW);
  //delay(100);
  digitalWrite(pin2,HIGH);
  delay(1000);
  digitalWrite(pin2,LOW);
 // delay(100);
}
