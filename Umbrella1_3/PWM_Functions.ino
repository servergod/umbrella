void pwmBlueOn()
{ 
    int rate = 201;
    analogWrite(bluPWM, rate);         
}


void pwmGreenOn()

{
    int rate = 147;
    analogWrite(grnPWM, rate);         
    
}
  void pwmRedOn()

{ 
    int rate = 28; 
    analogWrite(redPWM, rate);            
}

