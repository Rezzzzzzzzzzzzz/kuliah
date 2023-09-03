int LED1 = 13;
int LED2 = 12;
int Button = 2;
boolean LEDON = false;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(Button, INPUT_PULLUP);
}

void loop()
{
  int kondisi = digitalRead(Button);

  if(kondisi==LOW)
  {
    delay(50);
    LEDON =! LEDON;
    digitalWrite(LED1, LEDON);
    digitalWrite(LED2, LEDON);
  }
}
