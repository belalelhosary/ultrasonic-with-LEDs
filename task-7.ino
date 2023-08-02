// C++ code
//
#define trig 7
#define echo 8
long d,t;
int led1,led2,led3,led4;
void setup()
{
  pinMode(3, OUTPUT);
    pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

}

void loop()
{
 digitalWrite(trig,0);
delayMicroseconds(2);
digitalWrite(trig,1);
delayMicroseconds(10);
digitalWrite(trig,0);
t=pulseIn(echo,1);
d=(t/2)*0.0343;
  if(d>60){analogWrite(3,d);}else{ analogWrite(3,0);}
  if(d>120){analogWrite(5,d);} else{analogWrite(5,0);}
  if(d>180){analogWrite(6,d);} else{analogWrite(6,0);}
  if(d>240){analogWrite(9,d);} else{analogWrite(9,0);}

  if(d>255){
analogWrite(3,255);
analogWrite(5,255);
analogWrite(6,255);
    analogWrite(9,255);}



  
}