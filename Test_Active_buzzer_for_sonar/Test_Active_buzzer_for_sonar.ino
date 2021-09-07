int buzzer = 12;//the pin of the active buzzer
void setup()
{
 pinMode(buzzer,OUTPUT);//initialize the buzzer pin as an output
}
void loop()
{
 unsigned char i;
 while(1)
 {
   //output an frequency
   for(i=0;i<100;i++)
   {
    digitalWrite(buzzer,HIGH);
    delay(500);//wait for 1ms 500 long beep
    digitalWrite(buzzer,LOW);
    delay(1000);//wait for 1ms 1000
    }
    //output another frequency
     for(i=0;i<100;i++)
      {
        digitalWrite(buzzer,HIGH);
        delay(500);//wait for 2ms  500
        digitalWrite(buzzer,LOW);
        delay(100);//wait for 2ms  100
      }
  }
} 
