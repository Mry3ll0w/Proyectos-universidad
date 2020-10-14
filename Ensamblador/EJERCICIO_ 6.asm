.data
	elementos: .asciiz "Introduzca cuantos numeros se suman: \n"
	resultado: .asciiz "El resultado de la sunma es : "
.text 
# Escriba un programa utilizando el ensamblador del MIPS R2000, que realice
# la suma de los cuadrados de una serie de números introducidos por el teclado. 
# Para ello, el programa pedirá en primer lugar la cantidad de números a leer. 
# A continuación, leerá dichos números, realizará la suma correspondiente y por
# último imprimirá el resultado.


	main:
		li $v0,4 # imprimir mensaje
		la $a0,elementos
		syscall
		li $v0,5
		syscall
		move $t0,$v0	#Copiamos en t0 el numero de elementos
		li $t2,1 # i=0
	while:	
		li $v0,5
		syscall
		mul $v0,$v0,$v0
		add $t1,$t1,$v0	# suma= t1  
		beq $t2,$t0,exit
		addi $t2,$t2+1
	j while
	
	exit:
		li $v0,4
		la $a0,resultado
		syscall
		li $v0,1
		move $a0,$t1
		syscall	
		
	
	li $v0,10
	syscall