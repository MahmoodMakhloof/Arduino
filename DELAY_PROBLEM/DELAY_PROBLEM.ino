const int pb =A5;//we can use analog input as digital i/o
int i=0;
void setup() {
  Serial.begin(9600);
  
  pinMode(LED_BUILTIN,OUTPUT);
  digitalWrite(LED_BUILTIN,LOW);

  pinMode(pb,INPUT_PULLUP);
}

void loop() {
  if(digitalRead(pb)==LOW)//check pb
  {
    digitalWrite(LED_BUILTIN,HIGH);
  }
  else
  digitalWrite(LED_BUILTIN,LOW);

  Serial.println(i);//print i on serial monitor
  i++;
  delay(10000);//wait 10 seconds and do nothing , it cant see the change in pb
  
}
