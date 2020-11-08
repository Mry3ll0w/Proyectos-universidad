    AREA ejer3,CODE,READWRITE

Write_char  EQU &0 
EXIT        EQU &11
SWI_write0	EQU &2
SWI_ReadC	EQU &4

    ENTRY
    ADR r0,diag1
    SWI SWI_write0;

    SWI SWI_ReadC
    MOV R1,R0; R1= dividendo

    ADR r0,diag2
    SWI SWI_write0

    SWI SWI_ReadC
    MOV R2,R0; R2= divisor

    cmp R2,#0
    BNE CONT 
FAIL
    ;fail salta ,ejecucion secuencial
    ADR r0,fallo
    SWI SWI_write0
    SWI EXIT

CONT

    MOV R3,#0 ;r3=cociente=0
WHILE CMP R1,R2
    sub r1,r1,r2
    add r1,r1,#0 
    BGE WHILE
    
    
SAL    
    MOV r4,r1 ; R4 = Resto
    
    SWI EXIT;Salida del program

diag1   =   "Introduce el dividendo",&0a,&0d,0
diag2   =   "Introduce el divisor",&0a,&0d,0
fallo   =   "No se puede introducir un divisor = 0",&a,&d,0
    END 


