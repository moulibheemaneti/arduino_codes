int a=2;
int b=3;
int c=4;
void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);

}

void loop() {
  int x=2*digitalRead(A0)+digitalRead(A1);
  int y=2*digitalRead(A2)+digitalRead(A3);
  int z=x+y;
  Serial.println(z);
  digitalWrite(a,z%2);
  digitalWrite(b,z%4-z%2);
  digitalWrite(c,z%8-z%4);
  delay(1);  
}

