int triger=9;
int echo = 10 ;
float d ,t ;

void setup() {
  
 Serial.begin(9600);
 pinMode(triger,OUTPUT) ;
 pinMode(echo,INPUT);

}

void loop() {

  digitalWrite(triger,0) ;
  delayMicroseconds(2);
  digitalWrite(triger,1) ;
  delayMicroseconds(10);
  digitalWrite(triger,0) ;
  t=pulseIn(echo,1) ;
  d = (t*.0343)/2;
  if (d<=350){
    delay(3000);
    Serial.write('A');
 } 
 else {
   Serial.write('B');
   delay(20);

 }
}
