//Pin setup for 8 pins (port 2-9)

const int lowestPin = 2;
const int highestPin = 9;


void setup() {
  for(int thisPin = lowestPin; thisPin <=highestPin; thisPin++){ //iterates through pin number - inits as OUTPUT
    pinMode(thisPin, OUTPUT);
  }

}

void loop() {
 
  //iterate through pins
  for(int thisPin = lowestPin; thisPin <= highestPin; thisPin++){
    digitalWrite(thisPin, HIGH);
    delay(200);
  }

  //Fade the pin from highest to lowest
  for (int thisPin =highestPin; thisPin >= lowestPin; thisPin--){
    digitalWrite(thisPin, LOW);
    delay(100);
  }
  for(int thisPin = highestPin;thisPin>=lowestPin;thisPin--)
  {
    digitalWrite(thisPin,HIGH);//turn this led off
    delay(100);//wait for 100 microseconds
  }
  for(int thisPin = lowestPin;thisPin <= highestPin;thisPin++)
  {
    digitalWrite(thisPin,LOW);//turn this led on
    delay(100);//wait for 100 microseconds
  }
  //illuminate only even numbered pins
  for (int thisPin = lowestPin; thisPin <=highestPin; thisPin++){
    if (thisPin % 2==0)
    {
      digitalWrite(thisPin, HIGH);
      delay(100); 
    }
    else{
      digitalWrite(thisPin, LOW);
      delay(100);
    }

    delay(500); 
  }
  //function call for all pins to turn off
  allPinsOff();

  //illuminate only odd numbered pins
  for(int thisPin = highestPin; thisPin >= lowestPin; thisPin--){
    if(thisPin % 2 ==1){
      digitalWrite(thisPin, HIGH);
      delay(100); 
    }
    else{
      digitalWrite(thisPin, LOW);
      delay (100); 
    }
    delay(500); 
  }
  allPinsOff();
}

void allPinsOff(){
   //turn all pins off
  for (int thisPin = lowestPin; thisPin <=highestPin; thisPin++){
    digitalWrite(thisPin, LOW);
  }
  delay(1000); 
}

