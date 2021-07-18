//INTIALIZE VARIABLE FOR TWO LEDS 
int led1=10,led2=3;
void setup() {
  // SET MODE FOR LEDS
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {
  // USING ANALOG TO CONTROL BRIGHTNESS
  int i,j;
  // 8 BIT SO WE ARE USING CHARACTORS FROM 0 TO 255
    for( i=0, j=255;i<255,j>0;i++,j--) // IN THESE TWO FOR LOOP LED 1 AND 2 ARE REVERSED 
    {
    analogWrite(led1,i);  
    analogWrite(led2,j);
    delay(5);
    }
    for( i=0,  j=255;i<255,j>0;i++,j--)
    {
    analogWrite(led1,j);
    analogWrite(led2,i);                         
    delay(5);
    }
  
}
