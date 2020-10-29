int led_pin = 13;
int smoke_pin = A0;
float sensor_val = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
}

void loop()
{
  sensor_val = analogRead(smoke_pin);
  Serial.print("sensor reading: ");
  Serial.print(sensor_val);
  if(sensor_val>300){
  digitalWrite(led_pin,HIGH);
    Serial.println("   Smoke Detected!");
  } else {
  digitalWrite(led_pin,LOW);
    Serial.println("  no smoke detected");
  }
  delay(500);
}