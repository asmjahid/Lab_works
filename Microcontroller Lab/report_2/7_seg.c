void main() 
{
 trisb = 0b00000001;
 portb = 0b00000000;
 trisc = 0b00000000;
 portc = 0b00000000;
 
 while(1)
 {
  if(portb.f0 == 1)
  {
   portc = 0b00111111;
   //delay_ms(10);
  }
 }
}