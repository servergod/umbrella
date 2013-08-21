int datapin = 2; 
int clockpin = 3;
int latchpin = 4;
int bluPWM = 5;
int redPWM = 6;
int grnPWM = 7;
int spiralArrayRed[] = {0, 9, 17, 25, 33, 41, 49, 57};
int spiralArrayBlue [] = {1, 10, 18, 25, 42, 50, 58};
int spiralArrayGreen [] = {2, 11, 19, 26, 43, 51, 59};
int spiralCountRed = 0;
int spiralCountBlue = 0;
int spiralCountGreen = 0;
byte data = 0;


void setup()
{
  pinMode(datapin, OUTPUT);
  pinMode(clockpin, OUTPUT);  
  pinMode(latchpin, OUTPUT);
}

// The below function makes handles the entire shift and latch procedure.

void shiftWrite(int desiredPin, boolean desiredState)

{
  bitWrite(data,desiredPin,desiredState);
  shiftOut(datapin, clockpin, MSBFIRST, data);
  digitalWrite(latchpin, HIGH);
  digitalWrite(latchpin, LOW);
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







 






