void pwmBlueIn(int delayTime)
{ 
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(bluPWM, fadeValue);         
    delay(delayTime);                            
}
}

void pwmBlueOut(int delayTime)
{
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    analogWrite(bluPWM, fadeValue);         
    delay(delayTime);                            
  } 
}
  void pwmRedIn(int delayTime)
{ 
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(redPWM, fadeValue);         
    delay(delayTime);                            
    }
} 

  void pwmRedOut(int delayTime)
{  
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    analogWrite(redPWM, fadeValue);         
    delay(delayTime);                            
 } 
}

  void pwmGreenIn(int delayTime)
{ 
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(grnPWM, fadeValue);         
    delay(delayTime);                            
  }
}

void pwmGreenOut(int delayTime)
{
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    analogWrite(grnPWM, fadeValue);         
    delay(delayTime);                            
  }
} 
