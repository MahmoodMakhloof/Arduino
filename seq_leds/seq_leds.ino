const int led[6]={2,3,4,5,6,7}; //array called leds of 6 leds
void setup()
{
  for(int i=0;i<6;i++)
  pinMode(led[i],OUTPUT);//leds pins is output
  for(int i=0;i<6;i++)
  digitalWrite(led[i],HIGH);//all leds off
}

void loop()
{
  
  for(int j=0;j<6;j++)//on by sequence from right to left
  {
    digitalWrite(led[j],LOW);
    delay(300);
    digitalWrite(led[j],HIGH);
  }
  
  for(int j=5;j>0;j--)//on by sequence from left to right
  {
    digitalWrite(led[j],LOW);
    delay(300);
    digitalWrite(led[j],HIGH);
  }

  for(int i=0,j=5;i<6,j>=0;i++,j--)//both together at the same time
  {
    digitalWrite(led[j],LOW);
    digitalWrite(led[i],LOW);
    delay(300);
    digitalWrite(led[j],HIGH);
    digitalWrite(led[i],HIGH);
    
  }

}

