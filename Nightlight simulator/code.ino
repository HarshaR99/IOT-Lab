int LDR = A0;
int LDRvalue = 0;
int light_senitivity = 500;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
 LDRvalue = analogRead(LDR);
 Serial.println(LDRvalue);
 delay(50);
 
  if (LDRvalue<light_senitivity){
  	digitalWrite(13,HIGH);
  } else {
  		digitalWrite(13,LOW);
  }
  delay(1000);
}
