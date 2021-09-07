int soundSensor = 2;
int LED7 = 9;  int LED8 = 10;
int LED9 = 11; int LED10 = 12;

void setup() {
  pinMode (soundSensor, INPUT);
  pinMode (LED7, OUTPUT); pinMode (LED8, OUTPUT);
  pinMode (LED9, OUTPUT); pinMode (LED10, OUTPUT);
             }

void loop(){
  int statusSensor = digitalRead (soundSensor);
  
  if (statusSensor == 1)
  {
    digitalWrite(LED7, HIGH); digitalWrite(LED8, HIGH);
    digitalWrite(LED9, HIGH); digitalWrite(LED10, HIGH);
  }
  else
  {
    digitalWrite(LED7, LOW); digitalWrite(LED8, LOW);
    digitalWrite(LED9, LOW); digitalWrite(LED10, LOW);
  } 
           }
