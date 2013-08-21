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
