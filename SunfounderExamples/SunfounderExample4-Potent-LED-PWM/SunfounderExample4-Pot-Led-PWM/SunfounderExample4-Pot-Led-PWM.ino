//control LED brightness based on analog reading from potentiometer

const int ledPin = 9;
const int analogPin = A0; 

int inputValue = 0; //variable to store the val coming from sensor 
int outputValue = 0; //var to store the output value

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  inputValue = analogRead(analogPin); // reads value from sensor
  outputValue = map(inputValue, 0, 1023, 0, 255);//convert from 0-1023 proportional to the number of val from 0 to 255
  analogWrite(ledPin, outputValue); //turn the led on depending on the output value

}
