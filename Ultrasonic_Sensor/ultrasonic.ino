int trig_pin = 7;
int echo_pin = 6;

void setup()
{
  pinMode(trig_pin,OUTPUT);
  pinMode(echo_pin,INPUT);
  Serial.begin(9600);
}

void loop()
{
 long duration,cm;
  digitalWrite(trig_pin,LOW);
 delay(2);
 digitalWrite(trig_pin,HIGH);
 delay(10);
 digitalWrite(trig_pin,LOW);
 duration = pulseIn(echo_pin,HIGH);
 cm = duration/29/2;
Serial.print("Distance: ");
  Serial.println(cm);
  delay(500);
}
