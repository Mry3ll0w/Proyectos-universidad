    AREA ejer1,CODE,READWRITE
CAD_D   DCD 168
EXIT    EQU &11 
ESCRIBE	EQU &2
    ENTRY
    
    MOV R1,#21 ; r1=CONST (20+1)
    ADR R2,CAD_D ; Vector destino
    MOV r3,#0; R3=ITERADOR
WHILE 
    add r3,r3,#1
    EOR r4,r0,r1 ;r4= V[r3] XOR CONST  
    STR r4,[r2] ;
    add r0,r0,#8
    add r2,r2,#8
    cmp r3,#22
    beq sal 
    b WHILE
sal;
    ADR R0,CAD_D;
    SWI ESCRIBE
    
    SWI EXIT
CAD_O   =   "Roldan Bachata can.",&0a, &0d,0


    END


