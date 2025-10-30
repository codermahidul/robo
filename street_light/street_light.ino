#define LDR_PIN A0;
int light_one = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LDR_PIN, INPUT);
  pinMode(light_one, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int ldr_value = analogRead(LDR_PIN);
  Serial.println(ldr_value);
  delay(500);

  if(ldr_value < 600 ){
    digitalWrite(light_one,HIGH);
  }else{
    digitalWrite(light_one,LOW);
  }


}
