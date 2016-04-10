int led1 = 2;
int led2 = 1;
int led3 = 0;
int led4 = 3;
int led5 = 4;
int led6 = 5;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

void loop() {
  digitalWrite(gnd, LOW);    
  
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, LOW); 
  digitalWrite(led3, LOW); 
  digitalWrite(led4, HIGH);    
  digitalWrite(led5, LOW); 
  digitalWrite(led6, LOW); 
  delay(500);
  
  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);    
  digitalWrite(led5, HIGH); 
  digitalWrite(led6, LOW); 
  delay(500);
  
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW); 
  digitalWrite(led6, HIGH); 
  delay(500);
}
