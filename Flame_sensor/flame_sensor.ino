int temp_pin = A0;
int led_pin = 13;
int buzzer = 9;
void setup()
{
  Serial.begin(9600);
  pinMode(led_pin,OUTPUT);
	pinMode(buzzer,OUTPUT);
}

void loop()
{
 
  float input = analogRead(temp_pin);
 float mVolts = (input/1024.0)*5000;
  float celcius = (mVolts-500)/10;
  if(celcius>45){
  digitalWrite(led_pin,HIGH);
    digitalWrite(buzzer,HIGH);
  }
  else {
  digitalWrite(led_pin,LOW);
    digitalWrite(buzzer,LOW);
  }
  Serial.print("Temperature: ");
  Serial.println(celcius);
  delay(500);
}
