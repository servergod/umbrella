/*
pingPong()

This function will step through the LEDs, lighting one at at time,
in both directions.
*/

void pingPong()
{
  int index;
  int delayTime = 100; 
  
  for(index = 0; index <= 192; index++)
  {
    shiftWrite(index, HIGH);	// turn LED on
    delay(delayTime);		// pause to slow down the sequence
    shiftWrite(index, LOW);	// turn LED off
  }

  
  for(index = 192; index >= 0; index--)
  {
    shiftWrite(index, HIGH);	// turn LED on
    delay(delayTime);		// pause to slow down the sequence
    shiftWrite(index, LOW);	// turn LED off
  }
}



/*
marquee()

This function will mimic "chase lights" like those around signs.
*/

void marquee()
{
  int index;
  int delayTime = 200; 
  
  for(index = 0; index <= 3; index++)
  {
    shiftWrite(index, HIGH);    // Turn a LED on
    shiftWrite(index+4, HIGH);  // Skip four, and turn that LED on
    delay(delayTime);		// Pause to slow down the sequence
    shiftWrite(index, LOW);	// Turn both LEDs off
    shiftWrite(index+4, LOW);
  }
}
