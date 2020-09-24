int led_pin = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
}

void loop()
{
  int analog_val = analogRead(A0);
  int brightness = map(analog_val,0,1023,0,255);
  analogWrite(led_pin,brightness);
  Serial.print("Analog:");
  Serial.print(analog_val);
  Serial.print("Brightness:");
  Serial.print(brightness);
}
