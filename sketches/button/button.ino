/*****************************************************************
  Use button to switch LED on/off
*****************************************************************/
#define PIN_LED    2
#define PIN_BUTTON 13

void setup() {
  // initialize digital pins as outputs
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUTTON, INPUT);
}

void loop() {
  if (digitalRead(PIN_BUTTON) == LOW) {
    digitalWrite(PIN_LED,HIGH);
  }else{
    digitalWrite(PIN_LED,LOW);
  }
}
