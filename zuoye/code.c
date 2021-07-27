// C++ code
//
#include <MsTimer2.h>
void(* resetFunc) (void) = 0;
int tick1=0;
int tick2=0;
void onTimer()
{
  Serial.print("timer");
  tick1++;
  if(tick1>9)
  {
    tick2++;
  }
  if(tick1>9)
  {
    tick1=0;
  }
  if(tick2>9)
  {
    tick2=0;
  }
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
 
  
  Serial.println(tick1);
  digitalWrite(8,(tick1&0x1));
  digitalWrite(9,((tick1>>1)&0x1));
  digitalWrite(10,((tick1>>2)&0x1));
  digitalWrite(11,((tick1>>3)&0x1));
  
  digitalWrite(4,(tick2&0x1));
  digitalWrite(5,((tick2>>1)&0x1));
  digitalWrite(6,((tick2>>2)&0x1));
  digitalWrite(7,((tick2>>3)&0x1));
  
 
  
}
void setup()
{
  int i=0;
  for(i=4;i<=13;i++)
  {
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  MsTimer2::set(1000,onTimer);
  MsTimer2::start();
}

void loop ()
{
  int val = digitalRead(2); 
  if(val==LOW)
  {  
  resetFunc();
  }
   
  
}
