float sensorPin = A0;
unsigned long time;
float sum = 0, p = 0, flag = 0;
float sensorValue = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  time = millis();
  if(time < 20)
  {
    if(time > 0)
    {
      if(p == 10 && flag == 0)
      {
        sum = sum/10.0;
        sum = sqrt(sum);
        Serial.print("The Vrms of the voltage is:\n");
        Serial.print(sum);
        Serial.println();
        flag = 1;
      }
      else if(time%2 == 0 && flag == 0)
      {
        sensorValue = (analogRead(sensorPin)/1023.0)-0.5;
        sum = sum + sensorValue*sensorValue;
        Serial.print(sensorValue);
        Serial.println();
        p += 1;
      }
    }
  }
} 

