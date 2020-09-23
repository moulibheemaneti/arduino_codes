float current=0;
const int currentPin = A0;
const int sampleTime = 10; // sample over 10ms, 
const int numSamples = 100;  /
const int sampleInterval = sampleTime/numSamples;  // the sampling interval, must be longer than then ADC conversion time
void setup()
{
 Serial.begin(9600);
}

void loop()
{
double rms;
CurrentSense();
delay(1000);

}

void CurrentSense()
{
 unsigned long currentAcc = 0;
 unsigned int count = 0;
 unsigned long prevMicros = millis();
 while (count < numSamples)
 {
   if (millis() - prevMicros >= sampleInterval)
   {
   
     float adc_raw = analogRead(currentPin) ;
      adc_raw=adc_raw*(5.0/1024.0);
      adc_raw=adc_raw-2.5;
      ++count;
     currentAcc += (unsigned long)(adc_raw * adc_raw);
     prevMicros += sampleInterval;
   }
 }
 double rms = sqrt((float)currentAcc/(float)numSamples) ;
Serial.println(rms);
}

