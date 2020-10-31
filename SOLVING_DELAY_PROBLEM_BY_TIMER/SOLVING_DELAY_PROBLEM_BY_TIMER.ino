long t=0,duration=0;//DECLARE TIMER AND DURATION YOU WANT TO DELAY
int i=0;


void setup() {
  
   pinMode(LED_BUILTIN,OUTPUT);
   digitalWrite(LED_BUILTIN,LOW);
   t=millis(); //SET t = TIMER   
}

void loop() {
  duration=millis()-t;
  if(duration>=100) //AFTER 10 SECOND DO THE NEXT
  {
   digitalWrite(LED_BUILTIN,!digitalRead(LED_BUILTIN));
    t=millis();//DIFFERENT BETWEEN t AND duration IS ZERO
  }

}
