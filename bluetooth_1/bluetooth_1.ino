\\author: Pruthvi R Myakala
\\course: ITWS-3

int motor1_forward = 5;
int motor1_reverse = 7;
int motor2_forward = 9;
int motor2_reverse = 11;
void setup()
{
pinMode(motor1_forward,OUTPUT);
pinMode(motor1_reverse,OUTPUT);
pinMode(motor2_forward,OUTPUT);
pinMode(motor2_reverse,OUTPUT);
Serial.begin(9600);
Serial.println("start");
}
void loop()
{
  int incomingByte='0';
if(Serial.available()>0)
{
 incomingByte=Serial.read();
}
switch(incomingByte)
{
case '8':
digitalWrite(motor1_forward,HIGH);
digitalWrite(motor1_reverse,LOW);
digitalWrite(motor2_forward,HIGH);
digitalWrite(motor2_reverse,LOW);
delay(5000);
Serial.println("Stop\n");
incomingByte='0';
break;
case '2':
digitalWrite(motor1_forward,LOW);
digitalWrite(motor1_reverse,HIGH);
digitalWrite(motor2_forward,LOW);
digitalWrite(motor2_reverse,HIGH);
delay(5000);
Serial.println("Stop\n");
incomingByte='0';
break;
case '6':
digitalWrite(motor1_forward,HIGH);
digitalWrite(motor1_reverse,LOW);
digitalWrite(motor2_forward,LOW);
digitalWrite(motor2_reverse,LOW);
delay(5000);
Serial.println("Stop\n");
incomingByte='0';
break;
case '4':
digitalWrite(motor1_forward,LOW);
digitalWrite(motor1_reverse,LOW);
digitalWrite(motor2_forward,HIGH);
digitalWrite(motor2_reverse,LOW);
delay(5000);
Serial.println("Stop\n");
incomingByte='0';
break;
case '5':
digitalWrite(motor1_forward,HIGH);
digitalWrite(motor1_reverse,LOW);
digitalWrite(motor2_forward,LOW);
digitalWrite(motor2_reverse,HIGH);
Serial.println("Stop\n");
delay(5000);
incomingByte='0';
break;
case '0':
digitalWrite(motor1_forward,HIGH);
digitalWrite(motor1_reverse,HIGH);
digitalWrite(motor2_forward,HIGH);
digitalWrite(motor2_reverse,HIGH);
Serial.println("reached 0\n");
break;
}
}
