int pin1 = 9;
int val;

void setup() {
  Serial.begin(9600);
  pinMode(pin1,OUTPUT);
}

void loop() {
 if(Serial.available())
 {
  val = Serial.read();
 }
 else if(val=='0')
 {
  analogWrite(pin1,0);
  Serial.println("duty cycle is 0%");
 }
 else if(val=='1')
 {
  analogWrite(pin1,64);
  Serial.println("duty cycle is 25%");
 }
 else if(val=='2')
 {
  analogWrite(pin1,127);
  Serial.println("duty cycle is 50%");
 }
 else if(val=='3')
 {
  analogWrite(pin1,191);
  Serial.println("duty cycle is 75%");
 }
 else if(val=='4')
 {
  analogWrite(pin1,255);
  Serial.println("duty cycle is 100%");
 }
}
