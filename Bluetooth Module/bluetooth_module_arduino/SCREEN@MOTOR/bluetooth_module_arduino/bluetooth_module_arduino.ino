char Incoming_value = 0; 
int LED = 4 ;

#include <Servo.h>
Servo m1;   
Servo m2 ;
Servo m3 ;
Servo m4 ;
Servo m5 ;
Servo m6 ;

void setup() {

Serial.begin(9600);

pinMode(LED,OUTPUT);
  
}

void loop() {
  m1.attach(3); 
  m2.attach(5); 
  m3.attach(6); 
  m4.attach(9); 
  m5.attach(10);
  m6.attach(11);
 
while(Serial.available()>0){
  Incoming_value = Serial.read();
   switch(Incoming_value)  {
      case 'A' :
        digitalWrite(LED, HIGH); 
         m1.write(90);
         m2.write(180);
         m3.write(90);
         m4.write(180);
         m5.write(90);
         m6.write(180); 
         delay(15);  
         break ;
  
     case 'B' :
      digitalWrite(LED, LOW); 
      m1.detach();
      m2.detach();
      m3.detach();
      m4.detach();
      m5.detach();
      m6.detach(); 
      delay(5);
      break ;
  }
}
}
