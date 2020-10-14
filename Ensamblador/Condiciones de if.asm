.data 
	m1: .asciiz "Introduce un numero: \n"
	m2: .asciiz "Introduce otro numero: \n "
	iguales: .asciiz "\nLos numero introducidos son iguales\n"
	distintos: .asciiz "\nLos numeros son distintos\n"
	mayor1: .asciiz	"El primero es mayor que el 2\n"
	menor1: .asciiz	"El primero es menor que el 2\n"
	mayor2: .asciiz	"El 2 es mayor que el 1\n"
	menor2: .asciiz	"El 2 es menor que el 1\n"
.text
	li $v0,4
	la $a0,m1
	syscall
	
	li $v0,5	#Lee por teclado el numero y lo copia a t1
	syscall 
	move $t1,$v0
	
	li $v0,4
	la $a0,m2
	syscall
			
	li $v0,5
	syscall
	move $t2,$v0
	beq $t1,$t2,igual# comprueba que sea igual si t1=t2 ve a igual

	li $v0,10
	syscall#fin main
	igual:
		li $v0,4
		la $a0,iguales
		syscall
	