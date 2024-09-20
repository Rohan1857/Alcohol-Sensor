int digitalsensor = 7;
int analogsensor=A0;
int motor_driver=2;
int buzz=5;
void setup() {
  pinMode(digitalsensor,INPUT);
  pinMode(motor_driver,OUTPUT);
  pinMode(buzz,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  bool digital= digitalRead(digitalsensor);
  int analog=analogRead(analogsensor);
  if(digital==0)
  {
    Serial.println("abc");
    digitalWrite(buzz,HIGH);
    delay(1000);
    digitalWrite(motor_driver,LOW);
    delay(1000);
    digitalWrite(buzz,LOW);
    delay(20000);
  }
  else
  {
    digitalWrite(motor_driver,HIGH);
    digitalWrite(buzz,LOW);
  }
  delay(1000); 
}
