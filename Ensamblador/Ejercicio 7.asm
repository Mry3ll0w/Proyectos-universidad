# Escriba una rutina de nombre imprimirPantalla que reciba como parámetro 
# en el registro $a0 la dirección de una posición en memoria que contiene 
# un vector de enteros de 32 bits. 
# Los elementos del vector representan la dirección inicial de una tira de 
# caracteres (terminadas en cero),terminando el vector con el elemento de valor cero. 
# La función ha de imprimir todas las tiras de caracteres y devolver en el registro 
# $v0 el número de caracteres que se ha impreso en pantalla. 
.data 
	array: .ascii "a" "b" "c" "d" "0"
	sali: .asciiz "\nHe salido del while\n"
	espacio: .asciiz ", "
	prueba: .ascii "0"

.text
	lb $t6,prueba
	li $t0,1 # i=0
	li $t1,4 # para vector 
	while:
		lb $t2,array($t1)
		li $v0,1
		move $a0,$t2
		syscall
		li $v0,4
		la $a0,espacio
		syscall
		beq $t0,5,exit
		addi $t1,$t1,4
		addi $t0,$t0,1
		j while
	exit:
		li $v0,4
		la $a0, sali
	
		
