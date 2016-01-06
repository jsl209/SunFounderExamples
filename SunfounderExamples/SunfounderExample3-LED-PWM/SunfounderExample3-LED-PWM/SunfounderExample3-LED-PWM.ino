
//use Pulse-Width modulation to dim and brighten an LED at a given interval
//alternates the width of a pulse in a given period

const int ledPin = 9; //sets LED to pulse-width modulation pin 9

void setup() {
  pinMode(ledPin, OUTPUT);

}

void loop() {
  for (int a=0; a<=255; a++){ //loop up from 0 to 255
    analogWrite(ledPin, a);
    delay(8);
  }

  for (int a=255; a>=0; a--){  //loop down from 255
    analogWrite(ledPin, a); 
    delay(8);
  }

}
