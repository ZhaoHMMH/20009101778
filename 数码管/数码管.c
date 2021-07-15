void setup()
{
  Serial.begin(9600);
  for(int i=2;i<=11;i++)
  {
    pinMode(i,OUTPUT);
    
  }
  digitalWrite(2,HIGH);digitalWrite(3,HIGH);
             digitalWrite(4,HIGH);digitalWrite(8,HIGH);
             digitalWrite(9,HIGH);digitalWrite(11,HIGH);
             digitalWrite(10,HIGH);
}
char i;
void loop()
{
  
  while(Serial.available()>0)
  {
    i=Serial.read();
    i=i-'0';
  	switch(i)
    {
      case 0:digitalWrite(2,LOW);digitalWrite(3,LOW);
             digitalWrite(4,LOW);digitalWrite(8,LOW);
             digitalWrite(9,LOW);digitalWrite(11,LOW);
             digitalWrite(10,HIGH);break;
      case 1:digitalWrite(2,HIGH);digitalWrite(3,LOW);
             digitalWrite(4,LOW);digitalWrite(8,HIGH);
             digitalWrite(9,HIGH);digitalWrite(11,HIGH);
             digitalWrite(10,HIGH);break;
      case 2:digitalWrite(2,LOW);digitalWrite(3,LOW);
             digitalWrite(4,HIGH);digitalWrite(8,LOW);
             digitalWrite(9,LOW);digitalWrite(11,HIGH);
             digitalWrite(10,LOW);break;
      case 3:digitalWrite(2,LOW);digitalWrite(3,LOW);
             digitalWrite(4,LOW);digitalWrite(8,LOW);
             digitalWrite(9,HIGH);digitalWrite(11,HIGH);
             digitalWrite(10,LOW);break;
      case 4:digitalWrite(2,HIGH);digitalWrite(3,LOW);
             digitalWrite(4,LOW);digitalWrite(8,HIGH);
             digitalWrite(9,HIGH);digitalWrite(11,LOW);
             digitalWrite(10,LOW);break;
      case 5:digitalWrite(2,LOW);digitalWrite(3,HIGH);
             digitalWrite(4,LOW);digitalWrite(8,LOW);
             digitalWrite(9,HIGH);digitalWrite(11,LOW);
             digitalWrite(10,LOW);break;
      case 6:digitalWrite(2,LOW);digitalWrite(3,HIGH);
             digitalWrite(4,LOW);digitalWrite(8,LOW);
             digitalWrite(9,LOW);digitalWrite(11,LOW);
             digitalWrite(10,LOW);break;
      case 7:digitalWrite(2,LOW);digitalWrite(3,LOW);
             digitalWrite(4,LOW);digitalWrite(8,HIGH);
             digitalWrite(9,HIGH);digitalWrite(11,HIGH);
             digitalWrite(10,HIGH);break;
      case 8:digitalWrite(2,LOW);digitalWrite(3,LOW);
             digitalWrite(4,LOW);digitalWrite(8,LOW);
             digitalWrite(9,LOW);digitalWrite(11,LOW);
             digitalWrite(10,LOW);break;
      case 9:digitalWrite(2,LOW);digitalWrite(3,LOW);
             digitalWrite(4,LOW);digitalWrite(8,LOW);
             digitalWrite(9,HIGH);digitalWrite(11,LOW);
             digitalWrite(10,LOW);break;
    }
  }
}