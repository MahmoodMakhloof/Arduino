const int pb = 2;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT); //OUTPUT
  digitalWrite(LED_BUILTIN, LOW); //OFF

  pinMode(pb, INPUT_PULLUP); //PUSHBUTON
}
void loop()
{
  while(digitalRead(pb) == LOW) //IF PUSHED DOWN
  {
    delay(10); if (digitalRead(pb) == LOW) //DEBOUNCING OR USE CERAMIC CAPACITOR ON PB LEGS
    digitalWrite(LED_BUILTIN, HIGH); //LED ON
  }
  digitalWrite(LED_BUILTIN, LOW); //IF PUSHED UP , LED OFF
}

