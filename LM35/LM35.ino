#include <SoftwareSerial.h>
#include <stdlib.h>

//int ledPin = 13;     // LED
int lm35Pin = A0;     // LM35 analog input
// replace with your channel's thingspeak API write key
String apiKey = "KIFIPWO01PPSW1P7";
// connect 10 to TX and 11 to RX of Serial USB
SoftwareSerial ser(10, 11); // RX, TX
// this runs once initialize the digital pin as an output.
void setup() {
//pinMode(ledPin, OUTPUT);

Serial.begin(115200);     // enable debug serial
ser.begin(115200);     // enable software serial

ser.println("AT+RST");     // reset ESP8266
}
