const int rledPin = 11;
const int gledPin = 10;
const int bledPin = 9;



void setup() {
  pinMode(rledPin, OUTPUT);
  pinMode(gledPin, OUTPUT);
  pinMode(bledPin, OUTPUT);
}

void loop() {
  // randomly picks color value
  analogWrite(rledPin, random(0,254));
  delay(1000); 
  analogWrite(gledPin, random(0,254));
  delay(1000);
  analogWrite(bledPin, random(0,254));
  delay(1000);
}


