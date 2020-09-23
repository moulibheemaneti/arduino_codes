int One = 3;
int Two = 4;
int Three=5;
int Four=6;

void setup() 
{
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

 
void loop() 
{
  int inputA = digitalRead(One);
  int inputB = digitalRead(Two);
  int inputC = digitalRead(Three);
  int inputD = digitalRead(Four);
  

  if(inputA == 1 && inputC == 0 || inputA == 0 && inputC == 1)
  {
      digitalWrite(10, HIGH);
      if(inputB == 1 && inputD == 0 || inputB == 0 && inputD == 1)
      {
        digitalWrite(11,HIGH);
        digitalWrite(12,LOW);
      }
  }


  else if(inputA == 1 && inputC == 0 || inputA == 0 && inputC == 1 )
  {
      digitalWrite(10, HIGH);
      if(inputB == 1 && inputD == 1)
      {
        digitalWrite(11,LOW);
        digitalWrite(12,HIGH);
      }
  }


  else if(inputA == 1 && inputC == 0 || inputA == 0 && inputC == 1 )
  {
      digitalWrite(10, HIGH);
      if(inputB == 0 && inputD == 0)
      {
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
      }
  }


  else if(inputA == 1 && inputC == 1 )
  {
      digitalWrite(10, LOW);
      if(inputB == 1 && inputD == 0 || inputB == 0 && inputD == 1)
      {
        digitalWrite(11,LOW);
        digitalWrite(12,HIGH);
      }
  }


  else if(inputA == 1 && inputC == 1 )
  {
      digitalWrite(10, LOW);
      if(inputB == 0 && inputD == 0)
      {
        digitalWrite(11,HIGH);
        digitalWrite(12,LOW);
      }
  }
  
  else if(inputA == 1 && inputC == 1 )
  {
      digitalWrite(10, LOW);
      if(inputB == 1 && inputD == 1)
      {
        digitalWrite(11,HIGH);
        digitalWrite(12,HIGH);
      }
  }
  else if(inputA == 0 && inputC == 0 )
  {
      digitalWrite(10, LOW);
      if(inputB == 1 && inputD == 0 || inputB == 0 && inputD == 1)
      {
        digitalWrite(11,HIGH);
        digitalWrite(12,LOW);
      }
  }    
  else if(inputA == 0 && inputC == 0 )
  {
      digitalWrite(10, LOW);
      if(inputB == 0 && inputD == 0)
      {
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
      }
  }    
      
  else if(inputA == 0 && inputC == 0 )
  {
      digitalWrite(10, LOW);
      if(inputB == 1 && inputD == 1)
      {
        digitalWrite(11,LOW);
        digitalWrite(12,HIGH);
      }
  }    
  
  
} 

