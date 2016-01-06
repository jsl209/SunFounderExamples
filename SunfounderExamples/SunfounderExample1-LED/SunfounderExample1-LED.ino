/*Blinking LED - Half second on and off */

const int ledPin =9; //blue wire plugged in pin 9 on LED board

void setup() {

   pinMode(ledPin, OUTPUT); //initialize the pin for output

}

void loop() {
  digitalWrite(ledPin, HIGH); //sends high voltage to ledPin (pin 9)
  delay(500); //waits for half a second

  digitalWrite(ledPin, LOW); //after delay writes low voltage and turns the pin off
  delay(100);
  
  digitalWrite(ledPin, HIGH);
  delay(100); //waits for 1/10 second
  
  digitalWrite(ledPin, LOW); //after delay writes low voltage and turns the pin off
  delay(500); //waits for another half second

  

}
