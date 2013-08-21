void oneOnAtATimeRED()
{
  int index;
  int base = 0;
  int countEnd = 64;
  int delayTime = 10; 
  
  for(index = 0; index <= countEnd; base = base+=3);
  {
    shiftWrite(index, HIGH);	// turn LED on
    delay(delayTime);		// pause to slow down the sequence
    shiftWrite(index, LOW);	// turn LED off
  }
}

void oneOnAtATimeGRN()
{
  int index;
  int base = 1;
  int countEnd = 64;
  int delayTime = 10; 
  
  for(index = 0; index <= countEnd; base = base+=3);
  {
    shiftWrite(index, HIGH);	// turn LED on
    delay(delayTime);		// pause to slow down the sequence
    shiftWrite(index, LOW);	// turn LED off
  }
}

void oneOnAtATimeBLU()
{
  int index;
  int base = 2;
  int countEnd = 64;
  int delayTime = 10; 
  
  for(index = 0; index <= countEnd; base = base+=3);
  {
    shiftWrite(index, HIGH);	// turn LED on
    delay(delayTime);		// pause to slow down the sequence
    shiftWrite(index, LOW);	// turn LED off
  }
}
