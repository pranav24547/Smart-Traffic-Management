#include <Mouse.h>  
  
const int trigpin1= 13;  
const int echopin1= 12; 
const int trigpin2= 11;  
const int echopin2= 10;
const int trigpin3= 9;  
const int echopin3= 8;
const int trigpin4= 7;  
const int echopin4= 6;

const int led1 = 5 ;
const int led2 = 4 ;
const int led3 = 3 ;
const int led4 = 2 ;

long duration1,duration2,duration3,duration4;  
int distance1,distance2,distance3,distance4;  

void setup(){  
  pinMode(trigpin1,OUTPUT);  
  pinMode(echopin1,INPUT);  
  pinMode(trigpin2,OUTPUT);  
  pinMode(echopin2,INPUT);  
  pinMode(trigpin3,OUTPUT);  
  pinMode(echopin3,INPUT);  
  pinMode(trigpin4,OUTPUT);  
  pinMode(echopin4,INPUT);   

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);

  Serial.begin(9600);  
  Serial.println("Smart Traffic Signal System Started");
  Serial.println("--------------------------------");
}  

void loop(){  

  CalculateDistances();

  if(distance1 <= 20 || distance2<= 20){
    digitalWrite(led1,HIGH);
    delay(10000);
    digitalWrite(led1,LOW);
  }
  else{
    digitalWrite(led1,HIGH);
    delay(5000);
    digitalWrite(led1,LOW);
  }

  // LED 2
  digitalWrite(led2,HIGH);
  delay(5000);
  digitalWrite(led2,LOW);

  // LED 3
  if(distance3 <= 20 || distance4<= 4){
    digitalWrite(led3,HIGH);
    delay(10000);
    digitalWrite(led3,LOW);
  }
  else{
    digitalWrite(led3,HIGH);
    delay(5000);
    digitalWrite(led3,LOW);
  }

  // LED 4
  digitalWrite(led4,HIGH);
  delay(5000);
  digitalWrite(led4,LOW);
}

void CalculateDistances(){

  // Sensor 1
  digitalWrite(trigpin1,HIGH);  
  delayMicroseconds(100);  
  digitalWrite(trigpin1,LOW);  
  duration1 = pulseIn(echopin1,HIGH);  
  distance1 = duration1 * 0.034 / 2;  

  Serial.print("Sensor 1 Distance: ");
  Serial.print(distance1);
  Serial.println(" cm");

  delay(1000);

  // Sensor 2
  digitalWrite(trigpin2,HIGH);  
  delayMicroseconds(100);  
  digitalWrite(trigpin2,LOW);  
  duration2 = pulseIn(echopin2,HIGH);  
  distance2 = duration2 * 0.034 / 2;  

  Serial.print("Sensor 2 Distance: ");
  Serial.print(distance2);
  Serial.println(" cm");

  delay(1000);

  // Sensor 3
  digitalWrite(trigpin3,HIGH);  
  delayMicroseconds(100);  
  digitalWrite(trigpin3,LOW);  
  duration3 = pulseIn(echopin3,HIGH);  
  distance3 = duration3 * 0.034 / 2;  

  Serial.print("Sensor 3 Distance: ");
  Serial.print(distance3);
  Serial.println(" cm");

  delay(1000);

  // Sensor 4
  digitalWrite(trigpin4,HIGH);  
  delayMicroseconds(100);  
  digitalWrite(trigpin4,LOW);  
  duration4 = pulseIn(echopin4,HIGH);  
  distance4 = duration4 * 0.034 / 2;  

  Serial.print("Sensor 4 Distance: ");
  Serial.print(distance4);
  Serial.println(" cm");

  Serial.println("--------------------------------");
  delay(1000); 
}
