void setup() {
Serial.begin(9600);
pinMode(A0, INPUT);
}

void loop() {
int val=digitalRead(A0);
 Serial.println(val);
}
