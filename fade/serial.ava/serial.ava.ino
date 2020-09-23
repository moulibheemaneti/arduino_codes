void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
while(Serial.available())
{
char val=Serial.read();
//Serial.print("I recieved : ");
Serial.println(val);

if(val==48 || val==10)
  digitalWrite(13,LOW);
else
  digitalWrite(13,HIGH);
}
}
