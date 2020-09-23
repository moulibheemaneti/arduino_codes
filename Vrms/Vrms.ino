int an1=A0;

void setup() {
  pinMode(an1,INPUT);
  Serial.begin(9600);
}

void loop() {
  int i=0;
  float sum=0,a;
  unsigned long previousMillis = 0;
  while(i<70)
  {
    unsigned long currentMillis=millis();
    
    const long interval = 1;
    if(currentMillis-previousMillis>=interval)
    {
      a=((analogRead(an1)*5)/1023)-2;
    //  a = analogRead(an1);
      sum=sum+a*a;
      i++;
      previousMillis=currentMillis;
    }
  }
    sum=sqrt(sum/70.0);
    Serial.print(sum);
    Serial.print("\n");

    //delay(1000);

}

