const int btn_pin = 2;
const int 	led_pin = 13;
int btn_state = 0;

void setup()
{
  pinMode(led_pin, OUTPUT);
  pinMode(btn_pin,INPUT);
  
}

void loop()
{
  btn_state = digitalRead(btn_pin);
  if(btn_state==HIGH){
   		digitalWrite(led_pin,HIGH);
  }  else{
  		digitalWrite(led_pin,LOW);
  }
}
