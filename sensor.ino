int SensorPin = A0;
int led1 = 8;
int led2 = 5;
int led3 = 2;

void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  int humedad = analogRead(SensorPin);
  Serial.println(humedad);
  delay(200);

 
   

  if (humedad < 350)
  {
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  }
  
  else if(humedad > 350 && humedad < 450)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    }
    
    else if(humedad > 451)
    {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    }
    delay (1000);

}
