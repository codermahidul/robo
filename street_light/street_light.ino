int mq2Analog = A1;
int buzzerPin = 8;
int yellow_pin = 2;
int red_pin = 3;



void setup() {
  Serial.begin(9600);
  pinMode(mq2Analog, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(red_pin,OUTPUT);
  digitalWrite(buzzerPin,LOW);
}

void loop() {

  int analogValue = analogRead(mq2Analog);

  if(analogValue > 400){
    digitalWrite(buzzerPin,HIGH);
    int redPinState = digitalRead(red_pin);
    digitalWrite(red_pin, !redPinState);
    delay(100);
    digitalWrite(buzzerPin,LOW);
  }else{
    digitalWrite(buzzerPin,LOW);
    digitalWrite(red_pin, LOW);
  }

  if(analogValue > 300){
    digitalWrite(yellow_pin,HIGH);
  }


  Serial.println(analogValue);

  delay(1000);
}
