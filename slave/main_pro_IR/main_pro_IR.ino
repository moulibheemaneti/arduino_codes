
void setup() {
pinMode(5, INPUT);//IT CAN B OUTPUT TOO
  pinMode(6, INPUT);//IT CAN B OUTPUT TOO
  pinMode(10, INPUT);//IT CAN B OUTPUT TOO
  pinMode(11, INPUT);//IT CAN B OUTPUT TOO

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


void loop() {
val1=analogRead(A0);
val2=analogRead(A1);
Serial.print(val1);
Serial.print("");
Serial.print(val2);
Serial.print("");
if(val1 > 40)
  rightTurn();
if(val2 > 300)
  leftTurn();
  //moveforward();
}
