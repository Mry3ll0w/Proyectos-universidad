    AREA EJER4,CODE,READWRITE

SWI_write0 	EQU 	&2
SWI_ReadC   EQU     &4 
EXIT	    EQU     &11
    ENTRY

    ADR r0,diag1
    SWI SWI_write0

    SWI SWI_ReadC
    MOV r1,r0				; R1 = numero a  hacer la potencia

    ADR r0,diag2
    SWI SWI_write0

    SWI SWI_ReadC
    MOV r2,R0       ;R2 contiene el exponente de la potencia
    MOV r3,#0
WHILE
    mov r4,r1 ; Evita Undefined effect en MUl
    MUL r1,r4,r1
    CMP r3,r2
    add r3,r3,#1
    BLT WHILE

    SWI EXIT ; Fin de programa




diag1   = "Introduce la potencia ",&0a, &0d, 0
diag2   = "Introduce el exponente", &0a, &0d, 0
diag3   = "El resultado esta en r1", &0a, &0d, 0
    END