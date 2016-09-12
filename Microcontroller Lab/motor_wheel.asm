
_main:

;motor_wheel.c,1 :: 		void main()
;motor_wheel.c,3 :: 		trisb=00000000;
	CLRF       TRISB+0
;motor_wheel.c,4 :: 		portb=00000000;
	CLRF       PORTB+0
;motor_wheel.c,5 :: 		trisc=00011111;
	MOVLW      73
	MOVWF      TRISC+0
;motor_wheel.c,6 :: 		portc=00000000;
	CLRF       PORTC+0
;motor_wheel.c,8 :: 		while(1)
L_main0:
;motor_wheel.c,10 :: 		if(portc==0b00000001)
	MOVF       PORTC+0, 0
	XORLW      1
	BTFSS      STATUS+0, 2
	GOTO       L_main2
;motor_wheel.c,12 :: 		portb=0b00000101;
	MOVLW      5
	MOVWF      PORTB+0
;motor_wheel.c,13 :: 		}
L_main2:
;motor_wheel.c,15 :: 		if(portc==0b00000010)
	MOVF       PORTC+0, 0
	XORLW      2
	BTFSS      STATUS+0, 2
	GOTO       L_main3
;motor_wheel.c,17 :: 		portb=0b00001010;
	MOVLW      10
	MOVWF      PORTB+0
;motor_wheel.c,18 :: 		}
L_main3:
;motor_wheel.c,20 :: 		if(portc==0b00000100)
	MOVF       PORTC+0, 0
	XORLW      4
	BTFSS      STATUS+0, 2
	GOTO       L_main4
;motor_wheel.c,22 :: 		portb=0b00000110;
	MOVLW      6
	MOVWF      PORTB+0
;motor_wheel.c,23 :: 		}
L_main4:
;motor_wheel.c,25 :: 		if(portc==0b00001000)
	MOVF       PORTC+0, 0
	XORLW      8
	BTFSS      STATUS+0, 2
	GOTO       L_main5
;motor_wheel.c,27 :: 		portb=0b00001001;
	MOVLW      9
	MOVWF      PORTB+0
;motor_wheel.c,28 :: 		}
L_main5:
;motor_wheel.c,30 :: 		if(portc==0b00010000)
	MOVF       PORTC+0, 0
	XORLW      16
	BTFSS      STATUS+0, 2
	GOTO       L_main6
;motor_wheel.c,32 :: 		portb=0b00000000;
	CLRF       PORTB+0
;motor_wheel.c,33 :: 		}
L_main6:
;motor_wheel.c,34 :: 		}
	GOTO       L_main0
;motor_wheel.c,35 :: 		}
	GOTO       $+0
; end of _main
