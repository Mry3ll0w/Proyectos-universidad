    AREA EJER4,CODE,READWRITE

SWI_write0 	EQU 	&2
SWI_ReadC   EQU     &4 
EXIT	    EQU     &11
    ENTRY

    ADR r0,diag1
    SWI SWI_write0

    SWI SWI_ReadC
    MOV r1,r0				; R1 = numero a  hacer la potencia

    MOV R2,R1
WHILE
    
    MUL r1,r2,r1
    sub r2,r2,#1    
    CMP r2,#1 ; No consigo que salga cuando es #1
    BGT WHILE

    ADR r0,diag3
    SWI SWI_write0

    SWI EXIT ; Fin de programa




diag1   = "Introduce el factorial ",&0a, &0d, 0
diag3   = "El resultado esta en r1", &0a, &0d, 0
    END