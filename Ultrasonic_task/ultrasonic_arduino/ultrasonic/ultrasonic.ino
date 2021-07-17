#include <Servo.h>
Servo m1;   
Servo m2 ;
Servo m3 ;
Servo m4 ;
Servo m5 ;
Servo m6 ;

int triger=11;
int echo = 12 ;
float d ,t ;

void setup() {
  
 Serial.begin(9600);
 pinMode(triger,OUTPUT) ;
 pinMode(echo,INPUT);

}

void loop() {
  m1.attach(3); 
  m2.attach(5); 
  m3.attach(6); 
  m4.attach(9); 
  m5.attach(10);
  m6.attach(11);
  
  digitalWrite(triger,0) ;
  delayMicroseconds(2);
  digitalWrite(triger,1) ;
  delayMicroseconds(10);
  digitalWrite(triger,0) ;
  t=pulseIn(echo,1) ;
  d = (t*.0343)/2;
  Serial.print(d);
  Serial.print("cm");
  Serial.println();
  delay(100) ;

  if (d<=350) {
  
   m1.write(180);
   m2.write(180);
   m3.write(180);
   m4.write(180);
   m5.write(180);
   m6.write(180); 
   delay(15);
 
  
  
}
else {
  m1.detach();
  m2.detach();
  m3.detach();
  m4.detach();
  m5.detach();
  m6.detach();
   
}
}
