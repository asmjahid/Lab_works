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
              delay_ms(100);

              portc = 0b00000110;
              delay_ms(100);

              portc = 0b01011011;
              delay_ms(100);

              portc = 0b01001111;
              delay_ms(100);

              portc = 0b01100110;
              delay_ms(100);

              portc = 0b01101101;
              delay_ms(100);

              portc = 0b01111101;
              delay_ms(100);

              portc = 0b00000111;
              delay_ms(100);
  }

 }
}