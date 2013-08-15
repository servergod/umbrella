int datapin = 2; 
int clockpin = 3;
int latchpin = 4;
int bluPWM = 5;
int redPWM = 6;
int grnPWM = 7;
int spiralArrayRed[] = {0, 8, 16, 24, 32, 40, 48, 56};
int spiralArrayBlue [] = {1, 9, 17, 24, 41, 49, 57};
int spiralArrayGreen [] = {2, 10, 18, 25, 42, 50, 58};
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

}







 






