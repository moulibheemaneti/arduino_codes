String inputString = "";         // a string to hold incoming data

boolean stringComplete = false;  // whether the string is complete



String incomingString ="";

int startIndex = 0;

int endIndex = 0;



int led1 = 4;



void setup() {

  // initialize serial:

  Serial.begin(9600);



   // prepare the digital output pins

   pinMode(led1, OUTPUT);



   // initially all are off

   digitalWrite(led1, LOW);

 

  // reserve 200 bytes for the inputString:

  inputString.reserve(200);



  //--Start: Send SMS --

  Serial.print("AT+CMGF=1\r");    

  delay(1000);



  //Serial.print("AT+CMGD=1,4\r");  // Deletes all SMS saved in SIM memory

  Serial.print("AT+CMGDA=\""); 

  Serial.println("DEL ALL\"");

  

  delay(1000);

  Serial.print("AT+CMGS=\"+919381900264\"\r");    //Number to which you want to send the sms



  delay(1000);

  Serial.print("Test SMS - It Started Working1..\r");   //The text of the message to be sent

  delay(1000);

  Serial.write(0x1A);

  delay(1000);



  Serial.print("AT+CNMI=2,2,0,0,0\r"); 

  delay(1000);

  //--End: SMS--

}



void loop() {

  // print the string when a newline arrives:

  if (stringComplete && inputString!="") {



    //Serial.print("AT+CMGL=ALL\r");

   // inputString.toLowerCase();



    if(inputString=="on")

    {

      digitalWrite(led1, HIGH); 

    }

    else if(inputString=="off")

    {

      digitalWrite(led1, LOW); 

    }

   Serial.print("AT+CMGDA=\""); 

   Serial.println("DEL ALL\""); // To Delete Messages from SIM Memory

   delay(1000);

  // clear the string:

   inputString = "";

   stringComplete = false;

  }





void serialEvent() 

{

   if(stringComplete == false)

   { 

        incomingString = Serial.readString();

        if(incomingString!="")

        {

          startIndex = incomingString.indexOf("@");

          endIndex = incomingString.indexOf("#");



          if(startIndex>0 && endIndex>0)

          {

             inputString = incomingString.substring(startIndex,endIndex+1);

             stringComplete = true;

          }

   }

}
}
}


