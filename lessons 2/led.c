int i;
void setup()
{
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  for(i=2;i<=7;i++)
  { 
  	digitalWrite(i, HIGH);
  	delay(1000); // Wait for 1000 millisecond(s)
  	digitalWrite(i, LOW);
  	delay(1000); // Wait for 1000 millisecond(s)
  }
}