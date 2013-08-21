void binaryCount()
{
  int delayTime = 1000;

  shiftOut(datapin, clockpin, MSBFIRST, data);

  digitalWrite(latchpin, HIGH);
  digitalWrite(latchpin, LOW);

  data++;

  delay(delayTime);
}



void randomLED()
{
  int index;
  int delayTime = 100;
  
  index = random(192);
  
  shiftWrite(index, HIGH);	// turn LED on
  delay(delayTime);		// pause to slow down the sequence
  shiftWrite(index, LOW);	// turn LED off
}

/*this will light all the leds and leave them on sequentually

void oneAfterAnother()
{
  int index;
  int delayTime = 100;
  
  for(index = 0; index <= 192; index++)
  {
    shiftWrite(index, HIGH);
    delay(delayTime);                
  }

  for(index = 192; index >= 0; index--)
  {
    shiftWrite(index, LOW);
    delay(delayTime);
  }
*/
