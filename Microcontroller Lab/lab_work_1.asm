
_main:

;lab_work_1.c,1 :: 		void main()
;lab_work_1.c,3 :: 		trisb = 0b00000111;
	MOVLW      7
	MOVWF      TRISB+0
;lab_work_1.c,4 :: 		portb = 0b00000000;
	CLRF       PORTB+0
;lab_work_1.c,5 :: 		trisc = 0b00000000;
	CLRF       TRISC+0
;lab_work_1.c,6 :: 		portc = 0b00000000;
	CLRF       PORTC+0
;lab_work_1.c,8 :: 		while(1)
L_main0:
;lab_work_1.c,10 :: 		if(portb.f0 == 1)
	BTFSS      PORTB+0, 0
	GOTO       L_main2
;lab_work_1.c,12 :: 		portc = 0b00000001;
	MOVLW      1
	MOVWF      PORTC+0
;lab_work_1.c,13 :: 		}
L_main2:
;lab_work_1.c,15 :: 		if(portb.f1 == 1)
	BTFSS      PORTB+0, 1
	GOTO       L_main3
;lab_work_1.c,17 :: 		portc = 0b00000010;
	MOVLW      2
	MOVWF      PORTC+0
;lab_work_1.c,18 :: 		}
L_main3:
;lab_work_1.c,20 :: 		if(portb.f2 == 1)
	BTFSS      PORTB+0, 2
	GOTO       L_main4
;lab_work_1.c,22 :: 		portc = 0b00000100;
	MOVLW      4
	MOVWF      PORTC+0
;lab_work_1.c,23 :: 		}
L_main4:
;lab_work_1.c,25 :: 		}
	GOTO       L_main0
;lab_work_1.c,26 :: 		}
	GOTO       $+0
; end of _main
