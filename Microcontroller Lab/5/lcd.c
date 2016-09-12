sbit LCD_RS at RB4_bit;
sbit LCD_EN at RB5_bit;
sbit LCD_D4 at RB0_bit;
sbit LCD_D5 at RB1_bit;
sbit LCD_D6 at RB2_bit;
sbit LCD_D7 at RB3_bit;

sbit LCD_RS_Direction at TRISB4_bit;
sbit LCD_EN_Direction at TRISB5_bit;
sbit LCD_D4_Direction at TRISB0_bit;
sbit LCD_D5_Direction at TRISB1_bit;
sbit LCD_D6_Direction at TRISB2_bit;
sbit LCD_D7_Direction at TRISB3_bit;
void main()
{
 trisb=0b00000000;
 portb =0b00000000;
 trisc=0b00000011;
 portc =0b00000000;
 Lcd_Init();
 Lcd_Cmd(_LCD_CURSOR_OFF);
 Lcd_out(1,1,"     P U C");
 while(1)
 {
  if(portc==0b00000001)
  {
   Lcd_Cmd(_LCD_CLEAR);
   Lcd_out(1,1,"Name: Rahul");
   Lcd_out(2,1," ID : 367");
  }
  if(portc==0b00000010)
  {
   Lcd_Cmd(_LCD_CLEAR);
   Lcd_out(1,1," ID : 367");
   Lcd_out(2,1,"Name: Rahul");
  }
 }
}