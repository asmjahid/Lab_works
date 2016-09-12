void main() 
{
 trisb = 0b00000111;
 portb = 0b00000000;
 trisc = 0b00000000;
 portc = 0b00000000;

 while(1)
 {
         if(portb.f0 == 1)
         {
                     portc = 0b00000001;
         }

         if(portb.f1 == 1)
         {
                     portc = 0b00000010;
         }

         if(portb.f2 == 1)
         {
                     portc = 0b00000100;
         }
         if(portb.f3 == 1)
         {
                     portc = 0b00001111;
         }

 }

}