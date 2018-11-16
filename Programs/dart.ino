
int sensorpin1=A0;
int sensorpin2=A1;
int sensorpin3=A2;
int sensorpin4=A3;
int sensorpin5=A4;
int ledPin1=3;
int ledPin2=4;
int ledPin3=5;
int sensorValue=0;
void L1(void);
void L2(void);
void L3(void);
void L4(void);
void L5(void);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 L1();
 L2();
 L3();
 L4();
 L5(); 
}

void L1(){

sensorValue = analogRead(sensorpin1);
Serial.println(sensorValue);
delay(50);
if (sensorValue >970){

  digitalWrite(3, HIGH);
}
else{
  digitalWrite(3,LOW);
 
}
}
void L2(){
  sensorValue = analogRead(sensorpin2);
Serial.println(sensorValue);
delay(50);
if (sensorValue >970){

  digitalWrite(4, HIGH);
}
else{
  digitalWrite(4,LOW);
 

}




}
void L3() {
  // put your main code here, to run repeatedly:

sensorValue = analogRead(sensorpin3);
Serial.println(sensorValue);
delay(50);
if (sensorValue >970){

  digitalWrite(4, HIGH);
}
else{
  digitalWrite(4,LOW);
 
}
}



void L4() {
  // put your main code here, to run repeatedly:

sensorValue = analogRead(sensorpin4);
Serial.println(sensorValue);
delay(50);
if (sensorValue >970){

  digitalWrite(5, HIGH);
}
else{
  digitalWrite(5,LOW);
 
}
}




void L5() {
  // put your main code here, to run repeatedly:

sensorValue = analogRead(sensorpin5);
Serial.println(sensorValue);
delay(50);
if (sensorValue >970){

  digitalWrite(5, HIGH);
}
else{
  digitalWrite(5,LOW);
}
}
 
