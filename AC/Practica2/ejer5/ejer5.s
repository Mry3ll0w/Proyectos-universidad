    AREA EJER4,CODE,READWRITE

SWI_write0 	EQU 	&2
SWI_ReadC   EQU     &4 
EXIT	    EQU     &11
    ENTRY

    ADR r0,diag1
    SWI SWI_write0

    ;BREAKPOINT PARA INTRODUCIR NUMERO EN R1 de forma manual
   	

    MOV R2,R1   ; R1 = numero a  hacer la potencia
WHILE
    
    MUL r1,r2,r1
    sub r2,r2,#1    
    CMP r2,#1 ; 
    BGT WHILE

    ADR r0,diag3
    SWI SWI_write0

    SWI EXIT ; Fin de programa




diag1   = "Introduce el factorial ",&0a, &0d, 0
diag3   = "El resultado esta en r1", &0a, &0d, 0
    END