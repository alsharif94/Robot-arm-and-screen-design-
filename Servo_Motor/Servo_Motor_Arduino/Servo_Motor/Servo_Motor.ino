
#include <Servo.h>

// create servo objects to control the servo motors
Servo m1;   
Servo m2 ;
Servo m3 ;
Servo m4 ;
Servo m5 ;
Servo m6 ;

int sw=13 ;


void setup() {

pinMode(sw,INPUT);


}

void loop() {
  
// attaches the servo motors on pins of the arduino
  m1.attach(3); 
  m2.attach(5); 
  m3.attach(6); 
  m4.attach(9); 
  m5.attach(10);
  m6.attach(11);

  //intial postion for the servo motors 90  
  m1.write(0);
  m2.write(0);
  m3.write(0);
  m4.write(0);
  m5.write(0); 
  m6.write(0);
  delay(15) ;
  
 int x = digitalRead(sw) ;

if (x==1) {
  
 for (int pos = 0; pos <= 180; pos++){
   m1.write(pos);
   m2.write(pos);
   m3.write(pos);
   m4.write(pos);
   m5.write(pos);
   m6.write(pos); 
   delay(5);

 }

}
else {

  m1.detach() ;
  m2.detach() ;
  m3.detach() ;
  m4.detach() ;
  m5.detach() ;
  m6.detach() ;
}
}
