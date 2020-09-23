
void setup() {
  // put your setup code here, to run once:
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);

  Serial.begin(9600);
}

void rightTurn() {
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  
}

void moveForward() {
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(11, HIGH);
}

void leftTurn() {
  digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
}

void reverse() {
    digitalWrite(6, LOW);
  digitalWrite(11, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(10, HIGH);
}

void applyBreak() {
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
  digitalWrite(11, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  
//  moveForward();
//  delay(5000);
//  rightTurn();
//  delay(3000);  
//  leftTurn();
//  delay(3000);
//  applyBreak();
//  delay(2000);
//  reverse();
//  delay(5000);

  //Serial.print("enter command");
  //char val = Serial.read();
  
  while(Serial.available()) {
    //Serial.print("enter command");
   char val = Serial.read();
    if(val == 'f'){
      moveForward();
      //delay(2000);
     } else if(val == 'b'){
      applyBreak();
      //delay(2000);
     }else if(val == 'r'){
      rightTurn();
      //delay(2000);
     }else if(val == 'l'){
      leftTurn();
      //delay(2000);
     }else if(val =='x'){
       reverse();
       //delay(2000);
     }
     
     Serial.print("I received: ");
     Serial.println(val);
  }
}


