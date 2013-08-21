void pwmBlueOn()
{ 
    for(int rate = 199; rate < 220; rate++)
    {
    analogWrite(bluPWM, rate);         
    }
}


void pwmGreenOn()

{
    for(int rate = 106; rate < 210; rate++)
    {
    analogWrite(grnPWM, rate);         
    }
    
}
  void pwmRedOn()

{ 
    for(int rate = 72; rate < 125; rate++)
    {
    analogWrite(redPWM, rate);            
    }
}

