    AREA ejer1,CODE,READWRITE
EXIT EQU &11
VEC DCD 32 ; Se Reserva 4 bytes en memoria
    ENTRY
;Cree un programa que reserve e inicialice 4 bytes en memoria 
;(el valor de los bytes es de tu eleccion). 
;El programa debera sumar los tres primeros bytes 
;y almacenar el resultado en el cuarto byte.
    ADR R0,VEC
    MOV R1,#1
    MOV R2,#2
    MOV R3,#3
    mov r4,#4 

    STR R1,[R0]; [R0][0]=1
    ADD R0,R0,#8
    STR R2,[R0]; [R0][1]=2
    ADD R0,R0,#8 
    STR R3,[R0]; [R0][2]=3
    ADD R0,R0,#8 
    STR R4,[R0]; [R0][3]=4 
;Cargo elementos estáticos en el vector y comienzo el ejercicio abajo
    MOV R3,#0 ; r3=0 ;
    MOV R2,#0 ; iterador =0
    MOV R0,#0
    ADR R0,VEC ; Restablezco la dir base
;FALLO EN LA CARGA , HAY QUE IR DE 8 EN 8 YA QUE ES BYTE
WHILE 

    LDR R1,[R0] ; 
    ADD r3,r3,r1
    ADD R0,R0,#8
    add r2,r2,#1 
    CMP r2,#4
    BLEQ SAL
    B WHILE
SAL





    SWI EXIT        ; Fin program

    END