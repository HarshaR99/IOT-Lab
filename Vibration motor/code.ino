int vib_pin = 7;
int ldr_pin = A0;
int threshold = 400;

void setup()
{
  Serial.begin(9600);
  pinMode(vib_pin, OUTPUT);
}

void loop()
{
  float brightness = analogRead(ldr_pin);
  if(brightness<threshold){
  	digitalWrite(vib_pin,HIGH);
    Serial.print("brightness: ");
    Serial.print(brightness);
    Serial.println("   Vibration");
  } else {
    digitalWrite(vib_pin,LOW);
  	Serial.print("brightness: ");
    Serial.print(brightness);
    Serial.println("   No Vibration");
  }
  delay(1000);
}
