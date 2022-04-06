/*****************************************************************
* Making the on-board LED blink
*****************************************************************/

#define LED_ONBOARD  2
#define DELAY_MS 1000

void setup() {
  // initialize LED_ONBOARD as output.
  pinMode(LED_ONBOARD, OUTPUT);
}

void loop() {
  // blink by setting voltage high and low alternately
  digitalWrite(LED_ONBOARD, HIGH);
  delay(DELAY_MS);                       
  digitalWrite(LED_ONBOARD, LOW);    
  delay(DELAY_MS);                       
}
