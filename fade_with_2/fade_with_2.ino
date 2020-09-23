int pin1=A0;
int pin2=A1;

void setup() {
  // put your setup code here, to run once
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int fade1=0;fade1<=255;fade1=fade1+5)
  {
    analogWrite(pin1,fade1);
    delay(30);
    
    
  }
  for(int fade2=255;fade2<=0;fade2=fade2-5)
    {
      analogWrite(pin2,fade2);
      delay(30);
    }
  for(int fade2=0;fade2<=255;fade2=fade2+5)
  {
    analogWrite(pin2,fade2);
    delay(30);
    
    //delay(30);
  }
  for(int fade1=255;fade1<=0;fade1=fade1-5)
    {
      analogWrite(pin1,fade1);
      delay(30);
    }
}
