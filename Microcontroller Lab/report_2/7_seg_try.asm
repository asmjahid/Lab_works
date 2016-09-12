
_main:

;7_seg_try.c,1 :: 		void main()
;7_seg_try.c,3 :: 		trisb = 0b00000001;
	MOVLW      1
	MOVWF      TRISB+0
;7_seg_try.c,4 :: 		portb = 0b00000000;
	CLRF       PORTB+0
;7_seg_try.c,5 :: 		trisc = 0b00000000;
	CLRF       TRISC+0
;7_seg_try.c,6 :: 		portc = 0b00000000;
	CLRF       PORTC+0
;7_seg_try.c,8 :: 		while(1)
L_main0:
;7_seg_try.c,10 :: 		if(portb.f0 == 1)
	BTFSS      PORTB+0, 0
	GOTO       L_main2
;7_seg_try.c,12 :: 		portc = 0b00111111;
	MOVLW      63
	MOVWF      PORTC+0
;7_seg_try.c,13 :: 		delay_ms(100);
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
	DECFSZ     R12+0, 1
	GOTO       L_main3
	DECFSZ     R11+0, 1
	GOTO       L_main3
	NOP
	NOP
;7_seg_try.c,15 :: 		portc = 0b00000110;
	MOVLW      6
	MOVWF      PORTC+0
;7_seg_try.c,16 :: 		delay_ms(100);
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main4:
	DECFSZ     R13+0, 1
	GOTO       L_main4
	DECFSZ     R12+0, 1
	GOTO       L_main4
	DECFSZ     R11+0, 1
	GOTO       L_main4
	NOP
	NOP
;7_seg_try.c,18 :: 		portc = 0b01011011;
	MOVLW      91
	MOVWF      PORTC+0
;7_seg_try.c,19 :: 		delay_ms(100);
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main5:
	DECFSZ     R13+0, 1
	GOTO       L_main5
	DECFSZ     R12+0, 1
	GOTO       L_main5
	DECFSZ     R11+0, 1
	GOTO       L_main5
	NOP
	NOP
;7_seg_try.c,21 :: 		portc = 0b01001111;
	MOVLW      79
	MOVWF      PORTC+0
;7_seg_try.c,22 :: 		delay_ms(100);
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main6:
	DECFSZ     R13+0, 1
	GOTO       L_main6
	DECFSZ     R12+0, 1
	GOTO       L_main6
	DECFSZ     R11+0, 1
	GOTO       L_main6
	NOP
	NOP
;7_seg_try.c,24 :: 		portc = 0b01100110;
	MOVLW      102
	MOVWF      PORTC+0
;7_seg_try.c,25 :: 		delay_ms(100);
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main7:
	DECFSZ     R13+0, 1
	GOTO       L_main7
	DECFSZ     R12+0, 1
	GOTO       L_main7
	DECFSZ     R11+0, 1
	GOTO       L_main7
	NOP
	NOP
;7_seg_try.c,27 :: 		portc = 0b01101101;
	MOVLW      109
	MOVWF      PORTC+0
;7_seg_try.c,28 :: 		delay_ms(100);
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main8:
	DECFSZ     R13+0, 1
	GOTO       L_main8
	DECFSZ     R12+0, 1
	GOTO       L_main8
	DECFSZ     R11+0, 1
	GOTO       L_main8
	NOP
	NOP
;7_seg_try.c,30 :: 		portc = 0b01111101;
	MOVLW      125
	MOVWF      PORTC+0
;7_seg_try.c,31 :: 		delay_ms(100);
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main9:
	DECFSZ     R13+0, 1
	GOTO       L_main9
	DECFSZ     R12+0, 1
	GOTO       L_main9
	DECFSZ     R11+0, 1
	GOTO       L_main9
	NOP
	NOP
;7_seg_try.c,33 :: 		portc = 0b00000111;
	MOVLW      7
	MOVWF      PORTC+0
;7_seg_try.c,34 :: 		delay_ms(100);
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main10:
	DECFSZ     R13+0, 1
	GOTO       L_main10
	DECFSZ     R12+0, 1
	GOTO       L_main10
	DECFSZ     R11+0, 1
	GOTO       L_main10
	NOP
	NOP
;7_seg_try.c,35 :: 		}
L_main2:
;7_seg_try.c,37 :: 		}
	GOTO       L_main0
;7_seg_try.c,38 :: 		}
	GOTO       $+0
; end of _main
