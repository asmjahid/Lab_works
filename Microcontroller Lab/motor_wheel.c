void main()
{
 trisb=00000000;
 portb=00000000;
 trisc=00011111;
 portc=00000000;

 while(1)
 {
  if(portc==0b00000001)
  {
   portb=0b00000101;
  }

  if(portc==0b00000010)
  {
   portb=0b00001010;
  }

  if(portc==0b00000100)
  {
   portb=0b00000110;
  }

  if(portc==0b00001000)
  {
   portb=0b00001001;
  }

  if(portc==0b00010000)
  {
   portb=0b00000000;
  }
 }
}