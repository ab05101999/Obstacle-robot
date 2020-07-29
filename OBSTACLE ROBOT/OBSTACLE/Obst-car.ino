int echo=11;
int trig=12;
int duration;
int distance;
void setup() 
{
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
}

void loop() 
{
 digitalWrite(trig,LOW);
 delay(2);
 digitalWrite(trig,HIGH);
 delay(10);
 digitalWrite(trig,LOW);
 duration=pulseIn(echo,HIGH);
 distance=duration*0.034/2;
 Serial.println(distance);
 if(distance>50)
 {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
 }
 else
 {
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   delay(1000);
   Serial.println("right");
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   delay(100);
 }
 }
