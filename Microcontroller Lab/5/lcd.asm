
_main:

;lcd.c,14 :: 		void main()
;lcd.c,16 :: 		trisb=0b00000000;
	CLRF       TRISB+0
;lcd.c,17 :: 		portb =0b00000000;
	CLRF       PORTB+0
;lcd.c,18 :: 		trisc=0b00000011;
	MOVLW      3
	MOVWF      TRISC+0
;lcd.c,19 :: 		portc =0b00000000;
	CLRF       PORTC+0
;lcd.c,20 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;lcd.c,21 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;lcd.c,22 :: 		Lcd_out(1,1,"     P U C");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr1_lcd+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;lcd.c,23 :: 		while(1)
L_main0:
;lcd.c,25 :: 		if(portc==0b00000001)
	MOVF       PORTC+0, 0
	XORLW      1
	BTFSS      STATUS+0, 2
	GOTO       L_main2
;lcd.c,27 :: 		Lcd_Cmd(_LCD_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;lcd.c,28 :: 		Lcd_out(1,1,"Name: Rahul");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr2_lcd+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;lcd.c,29 :: 		Lcd_out(2,1," ID : 367");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr3_lcd+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;lcd.c,30 :: 		}
L_main2:
;lcd.c,31 :: 		if(portc==0b00000010)
	MOVF       PORTC+0, 0
	XORLW      2
	BTFSS      STATUS+0, 2
	GOTO       L_main3
;lcd.c,33 :: 		Lcd_Cmd(_LCD_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;lcd.c,34 :: 		Lcd_out(1,1," ID : 367");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr4_lcd+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;lcd.c,35 :: 		Lcd_out(2,1,"Name: Rahul");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr5_lcd+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;lcd.c,36 :: 		}
L_main3:
;lcd.c,37 :: 		}
	GOTO       L_main0
;lcd.c,38 :: 		}
	GOTO       $+0
; end of _main
