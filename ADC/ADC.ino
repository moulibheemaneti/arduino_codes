int readpin=A0;
void setup() {
    Serial.begin(9600);
}

void loop() {
  int adc_raw=analogRead(readpin);
  Serial.println(adc_raw,BIN);
  delay(5000);
}
