/*
  Cylon Warrier
  Cycles through 6 LEDs going back and forth like the original BattleStar Galactica cylon warrier helmet.
  Pot controls the speed of the LEDs scanning.
  Built on a makershield using BLUE LEDs. 
 */

///////////////////////////////////////////////////////////////////////////
//

void setup() 
{
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(8, OUTPUT);     
  pinMode(9, OUTPUT);     
  pinMode(10, OUTPUT);     
  pinMode(11, OUTPUT);     
  pinMode(12, OUTPUT);     
  pinMode(13, OUTPUT);     
  digitalWrite(8, LOW);    // set the LED off
  digitalWrite(9, LOW);    // set the LED off
  digitalWrite(10, LOW);    // set the LED off
  digitalWrite(11, LOW);    // set the LED off
  digitalWrite(12, LOW);    // set the LED off
  digitalWrite(13, LOW);    // set the LED off
}

///////////////////////////////////////////////////////////////////////////
//

void samplePotAndWait(void)
{
  int sensorValue = analogRead(A0);
  // map(value, fromLow, fromHigh, toLow, toHigh)
  sensorValue = map(sensorValue,0,255,20,100);
  delay(sensorValue);               // wait for time of pot
}

///////////////////////////////////////////////////////////////////////////
//

void loop() 
{
  int sensorValue = analogRead(A0);
  digitalWrite(8, HIGH);    // set the LED on
  samplePotAndWait();
  digitalWrite(8, LOW);     // set the LED off
  digitalWrite(9, HIGH);    // set the LED on
  samplePotAndWait();
  digitalWrite(9, LOW);     // set the LED off
  digitalWrite(10, HIGH);   // set the LED on
  samplePotAndWait();
  digitalWrite(10, LOW);    // set the LED off
  digitalWrite(11, HIGH);   // set the LED on
  samplePotAndWait();
  digitalWrite(11, LOW);    // set the LED off
  digitalWrite(12, HIGH);   // set the LED on
  samplePotAndWait();
  digitalWrite(12, LOW);    // set the LED off
  digitalWrite(13, HIGH);   // set the LED on
  samplePotAndWait();
  digitalWrite(13, LOW);    // set the LED off
  digitalWrite(12, HIGH);   // set the LED off
  samplePotAndWait();
  digitalWrite(12, LOW);    // set the LED off
  digitalWrite(11, HIGH);   // set the LED off
  samplePotAndWait();
  digitalWrite(11, LOW);    // set the LED off
  digitalWrite(10, HIGH);   // set the LED off
  samplePotAndWait();
  digitalWrite(10, LOW);    // set the LED off
  digitalWrite(9, HIGH);   // set the LED off
  samplePotAndWait();
  digitalWrite(9, LOW);    // set the LED off
}

