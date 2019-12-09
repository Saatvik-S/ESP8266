/*
 Blink by Saatvik Sehgal for WEMOS D1 mini
*/
const int LED = D3; // set LED as the variable name for the pin D3 so we can use "LED" instead of writing D3 every time
// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED, OUTPUT); // initialize digital pin D3 as an output
  }
  
// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
