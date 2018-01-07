 char c=0;
void setup () {
  pinMode(2,OUTPUT);// left motor pin 1
  pinMode(3,OUTPUT);// left motor pin2
  pinMode(4,OUTPUT);// right motor pin 1 
  pinMode(5,OUTPUT);// right motor  pin 2
  Serial.begin(9600);//enable serial communication
}
void loop () { 
  if (Serial.available()){
  c=Serial.read();
 if(c=='w') forward();
 if(c=='a') left();
 if(c=='s') right();
 if(c=='d') Stop();
  }
}

void forward() {
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
} 

void left() 
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(7,HIGH); 
  digitalWrite(8,LOW); 
} 

 
void Stop() {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
} 
void right() 
{
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(7,LOW); 
  digitalWrite(8,LOW); 
}
