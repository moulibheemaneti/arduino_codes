int val;
int temppin=A0;//connect the pin to analog A0
void setup() {
  Serial.begin(9600);
}

void loop() {
val = analogRead(temppin);
float av = (val/1024.0)*5000;
float cel = av/10;
float far = (9*cel)/5 +32;

Serial.print("temperature = ");
Serial.print(cel);
Serial.print(" *C");
Serial.println();
delay(1000);

}
