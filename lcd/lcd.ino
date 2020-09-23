#include<LiquidCrystal.h>
//LiquidCrystal lcd(2,3,4,5,6,7);
LiquidCrystal lcd(7,6,5,4,3,2);
void setup() {
lcd.begin(16,2);
lcd.print("123456789-123");

//lcd.begin(16,2);
lcd.println("dataisthebestthing");


}

void loop() {
}
