int pin = A1;
int buzzer_pin = 8;
int red_light_pin = 3;



void setup() {
  Serial.begin(9600);
  pinMode(pin,OUTPUT);
  pinMode(buzzer_pin,OUTPUT);
  pinMode(red_light_pin,OUTPUT);

}

void loop() {
  int value = analogRead(pin);

  
  if(value > 400){
    digitalWrite(red_light_pin,HIGH);
    digitalWrite(buzzer_pin, HIGH);
  }

  Serial.println(value);

}
