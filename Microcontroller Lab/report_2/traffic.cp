#line 1 "E:/rahul_CSE(June '12) - [1202210200367]/rahul_5th Sem (C5) [1202210200367]/Microcontroller Lab/report_2/traffic.c"
void main()
{
 trisb = 0b00000111;
 portb = 0b00000000;
 trisc = 0b00000000;
 portc = 0b00000000;

 while(1)
 {
 if(portb.f0 == 1)
 portc = 0b00000001;








 }
}
