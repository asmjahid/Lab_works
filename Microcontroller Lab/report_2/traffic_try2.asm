
_main:

;traffic_try2.c,1 :: 		void main()
;traffic_try2.c,3 :: 		trisb = 0b00000001;
	MOVLW      1
	MOVWF      TRISB+0
;traffic_try2.c,4 :: 		portb = 0b00000000;
	CLRF       PORTB+0
;traffic_try2.c,5 :: 		trisc = 0b00000000;
	CLRF       TRISC+0
;traffic_try2.c,6 :: 		portc = 0b00000000;
	CLRF       PORTC+0
;traffic_try2.c,8 :: 		while(1)
L_main0:
;traffic_try2.c,10 :: 		if(portb.f0 == 1)
	BTFSS      PORTB+0, 0
	GOTO       L_main2
;traffic_try2.c,12 :: 		portc = 0b00000001;
	MOVLW      1
	MOVWF      PORTC+0
;traffic_try2.c,13 :: 		delay_ms(200);
	MOVLW      6
	MOVWF      R11+0
	MOVLW      19
	MOVWF      R12+0
	MOVLW      173
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
;traffic_try2.c,15 :: 		portc = 0b00000010;
	MOVLW      2
	MOVWF      PORTC+0
;traffic_try2.c,16 :: 		delay_ms(100);
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
;traffic_try2.c,18 :: 		portc = 0b00000100;
	MOVLW      4
	MOVWF      PORTC+0
;traffic_try2.c,19 :: 		delay_ms(200);
	MOVLW      6
	MOVWF      R11+0
	MOVLW      19
	MOVWF      R12+0
	MOVLW      173
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
;traffic_try2.c,21 :: 		portc = 0b00000010;
	MOVLW      2
	MOVWF      PORTC+0
;traffic_try2.c,22 :: 		delay_ms(100);
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
;traffic_try2.c,24 :: 		portc = 0b00000001;
	MOVLW      1
	MOVWF      PORTC+0
;traffic_try2.c,25 :: 		}
L_main2:
;traffic_try2.c,26 :: 		}
	GOTO       L_main0
;traffic_try2.c,27 :: 		}
	GOTO       $+0
; end of _main
