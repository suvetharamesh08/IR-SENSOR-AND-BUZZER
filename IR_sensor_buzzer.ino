int ir=3;
int buzzer=4;
void setup() {
  pinMode(ir,INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int val=digitalRead(ir);
  if(val==HIGH){
    Serial.println("NO OBJECT");
    digitalWrite(buzzer,LOW);
  }
  else{
    Serial.println("OBJECT DETECTED");
    digitalWrite(buzzer,HIGH);
}
delay(1000);
}
