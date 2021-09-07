#include <Servo.h>
int x_key = A1;                                               
int y_key = A0; 
int x_pos=0;
int y_pos;
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int initial_position = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode (x_key,INPUT);
  pinMode (y_key,INPUT);
}

void loop() {
 // for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees // in steps of 1 degree
  x_pos = analogRead (x_key) ;  
  y_pos = analogRead (y_key) ;  

  if (x_pos < 300 || y_pos < 300 )
  {
    if (initial_position < 10) 
       {
       } 
    else
      { initial_position = initial_position - 20; 
        myservo.write ( initial_position ) ; 
        delay (100) ; 
      } 
   } 
   if (x_pos > 700 || y_pos > 700)
   {
      if (initial_position > 180)
        {  
        }  
      else
      { initial_position = initial_position + 20;
        myservo.write ( initial_position ) ;
        delay (100) ;
      }
   }

    //myservo.write(pos);              // tell servo to go to position in variable 'pos'
    //delay(30);                       // waits 15ms for the servo to reach the position 
    //}
 // for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    //myservo.write(pos);              // tell servo to go to position in variable 'pos'
    //delay(30);                       // waits 15ms for the servo to reach the position
  //}
}
