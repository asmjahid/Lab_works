
_main:

;traffic.c,1 :: 		void main()
;traffic.c,3 :: 		trisb = 0b00000111;
	MOVLW      7
	MOVWF      TRISB+0
;traffic.c,4 :: 		portb = 0b00000000;
	CLRF       PORTB+0
;traffic.c,5 :: 		trisc = 0b00000000;
	CLRF       TRISC+0
;traffic.c,6 :: 		portc = 0b00000000;
	CLRF       PORTC+0
;traffic.c,8 :: 		while(1)
L_main0:
;traffic.c,10 :: 		if(portb.f0 == 1)
	BTFSS      PORTB+0, 0
	GOTO       L_main2
;traffic.c,11 :: 		portc = 0b00000001;
	MOVLW      1
	MOVWF      PORTC+0
L_main2:
;traffic.c,20 :: 		}
	GOTO       L_main0
;traffic.c,21 :: 		}
	GOTO       $+0
; end of _main
