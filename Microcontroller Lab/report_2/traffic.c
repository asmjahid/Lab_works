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
   portc = 0b00000001;
   delay_ms(200);
                     
   portc = 0b00000010;
   delay_ms(100);
                     
   portc = 0b00000100;
   delay_ms(200);
   
   portc = 0b00000010;
   delay_ms(100);
   portc = 0b00000001;
 }
}