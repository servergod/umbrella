int datapin = 2; 
int clockpin = 3;
int latchpin = 4;
int bluPWM = 5;
int redPWM = 6;
int grnPWM = 7;
int spiralArray[] = {0, 8, 16, 24, 32, 40, 48, 56};
int spiralCount = 0;
byte data = 0;


void setup()
{
  pinMode(datapin, OUTPUT);
  pinMode(clockpin, OUTPUT);  
  pinMode(latchpin, OUTPUT);
}
/*
oneAfterAnother();      // All on, all off
oneOnAtATimeBLU();       // Scroll down the line
oneOnAtATimeGRN();       // Scroll down the line
oneOnAtATimeRED();       // Scroll down the line
pingPong();           // Like above, but back and forth
randomLED();          // Blink random LEDs
marquee();            // like around a sign
binaryCount();        // Bit patterns from 0 to 255
pwmBlueIn(delayTime);
pwmBlueOut(delayTime);
pwmRedIn(delayTime);
pwmRedOut(delayTime);
pwmGreenIn(delayTime);
pwmGreenOut(delayTime);
*/


void loop()
{

}


void shiftWrite(int desiredPin, boolean desiredState)

{
  bitWrite(data,desiredPin,desiredState);
  shiftOut(datapin, clockpin, MSBFIRST, data);
  digitalWrite(latchpin, HIGH);
  digitalWrite(latchpin, LOW);
}


//this will create a spiral

void spiral()
{
  
 
  
}


//this will light all the leds and leave them on sequentually

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
}

 
/*
oneOnAtATime()

This function will step through the LEDs, lighting one at at time.
*/

void oneOnAtATimeRED()
{
  int index;
  int base = 0;
  int countEnd = 64;
  int delayTime = 100; 
  
  for(index = 0; index <= countEnd; base = (base+3));
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
  int delayTime = 100; 
  
  for(index = 0; index <= countEnd; base = (base+3));
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
  int delayTime = 100; 
  
  for(index = 0; index <= countEnd; base = (base+3));
  {
    shiftWrite(index, HIGH);	// turn LED on
    delay(delayTime);		// pause to slow down the sequence
    shiftWrite(index, LOW);	// turn LED off
  }
}

 
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



void randomLED()
{
  int index;
  int delayTime = 100;
  
  index = random(192);
  
  shiftWrite(index, HIGH);	// turn LED on
  delay(delayTime);		// pause to slow down the sequence
  shiftWrite(index, LOW);	// turn LED off
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


void binaryCount()
{
  int delayTime = 1000;

  shiftOut(datapin, clockpin, MSBFIRST, data);

  digitalWrite(latchpin, HIGH);
  digitalWrite(latchpin, LOW);

  data++;

  delay(delayTime);
}

void pwmBlueIn(int x)
{ 
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(bluPWM, fadeValue);         
    // wait for 30 milliseconds to see the dimming effect    
    delay(x);                            
}
}

void pwmBlueOut(int x)
{
  // fade out from max to min in increments of 5 points:
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(bluPWM, fadeValue);         
    // wait for 30 milliseconds to see the dimming effect    
    delay(x);                            
  } 
}
  void pwmRedIn(int x)
{ 
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(redPWM, fadeValue);         
    // wait for 30 milliseconds to see the dimming effect    
    delay(x);                            
    }
} 

  void pwmRedOut(int x)
{  
  // fade out from max to min in increments of 5 points:
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(redPWM, fadeValue);         
    // wait for 30 milliseconds to see the dimming effect    
    delay(x);                            
 } 
}

  void pwmGreenIn(int x)
{ 
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(grnPWM, fadeValue);         
    // wait for 30 milliseconds to see the dimming effect    
    delay(x);                            
  }
}

void pwmGreenOut(int x)
{
  // fade out from max to min in increments of 5 points:
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(grnPWM, fadeValue);         
    // wait for 30 milliseconds to see the dimming effect    
    delay(x);                            
  }
} 
