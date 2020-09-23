
int A_msb=13;
int A_lsb=12;
int B_msb=10;
int B_lsb=9;

int a, a1, b, b1, c, c1, s, s1; 

int S_msb=5;
int S_lsb=6;
int C=7;
int C1=4;


void setup(){
  pinMode(A_msb,INPUT);
  pinMode(A_lsb,INPUT);
  pinMode(B_msb,INPUT);
  pinMode(B_lsb,INPUT);
  
  pinMode(S_msb,OUTPUT);
  pinMode(S_lsb,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(C1,OUTPUT);
  
  //digitalWrite(A_lsb,HIGH);
  //digitalWrite(A_msb,HIGH);
  //digitalWrite(B_lsb,HIGH);
  //digitalWrite(B_msb,HIGH);
  
  digitalWrite(A_lsb,HIGH);
  digitalWrite(A_lsb,LOW);
  digitalWrite(A_msb,HIGH);
  digitalWrite(A_msb,LOW);
  digitalWrite(B_lsb,HIGH);
  digitalWrite(B_lsb,LOW);
  digitalWrite(B_msb,HIGH);
  digitalWrite(B_msb,LOW);
  
  
}

void loop(){
  
  
  if(digitalRead(A_lsb)==HIGH){
    a=1;
  }
  else{
    a=0;
  }
  if(digitalRead(A_msb)==HIGH){
    a1=1;
  }
  else{
    a1=0;
  }
  if(digitalRead(B_lsb)==HIGH){
    b=1;
  }
  else{
    b=0;
  }
  if(digitalRead(B_msb)==HIGH){
    b1=1;
  }
  else{
    b1=0;
  }
  s=a^b;
  c=a&b;
  
  s1=(a1^b1)^c;
  c1=(a1&b1)||((a1^b1)&c);
  
  if(s==1){
    digitalWrite(S_lsb, HIGH);
  }
  else{
    digitalWrite(S_lsb, LOW);
  }
  if(s1==1){
    digitalWrite(S_msb, HIGH);
  }
  else{
    digitalWrite(S_msb, LOW);
  }
  if(c1==1){
    digitalWrite(C1, HIGH);
  }
  else{
    digitalWrite(C1, LOW);
  }
  
  Serial.println(C1);
  delay(100);
  
  
}

