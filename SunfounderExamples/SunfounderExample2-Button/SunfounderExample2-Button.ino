//Toggles an LED on the circuit board based on a button press

//Constants

const int keyPin = 12; //number of the key pin
const int ledPin =13; //# of the Led


void setup() {
  pinMode(keyPin, INPUT); //init pin 12 as input
  pinMode(ledPin, OUTPUT);//init pin 13 as output

}

void loop() {
  //read the state of the key value from the button
  //if the button is pressed, e.g., voltage =HIGH, then trigger LED

  if(digitalRead(keyPin) == HIGH)
  {
    digitalWrite(ledPin, HIGH); //turns on LED
    delay(1000); 
    digitalWrite(ledPin, LOW);//reset button due to sometimes always being on (even with 10k resistor)
  }
  else{
    digitalWrite(ledPin, LOW); //turns off the LED
  }

}
