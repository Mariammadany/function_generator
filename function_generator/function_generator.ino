#include <TimerOne.h>
//variables
const int outpin=10;//generate pulse signal
const int inpin=3;//reads generated pulse signal;
int values=1;//pulse value(0,1)
void setup() {
  Serial.begin(9600);
  pinMode(outpin,OUTPUT);
  pinMode(inpin,INPUT);
  Timer1.initialize(1000);//t=1/f
  Timer1.pwm(outpin,50);//sends pulse to this pin with a50%duty cycle
  
  

}

void loop() {
  values=digitalRead(inpin);
  Serial.print(values);
  Serial.println();

}
