#include <Servo.h>
Servo myservo;
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led1 = 2;
int led2 = 1;
int led3 = 0;
int led4 = 3;
int led5 = 4;
int led6 = 5;
int gnd = 7;
int val = 130;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(gnd, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
            digitalWrite(gnd, LOW);    // wait for a second
  digitalWrite(led1, HIGH);    
     digitalWrite(led2, LOW); 
    digitalWrite(led3, LOW); 
  digitalWrite(led4, HIGH);    
     digitalWrite(led5, LOW); 
    digitalWrite(led6, LOW); 
   delay(500);
   digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(led2, HIGH); 
    digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);    
     digitalWrite(led5, HIGH); 
    digitalWrite(led6, LOW); 
   delay(500);
   digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, LOW); 
    digitalWrite(led3, HIGH); 
  digitalWrite(led4, LOW);    
     digitalWrite(led5, LOW); 
    digitalWrite(led6, HIGH); 
   delay(500);
            // wait for a second
}
