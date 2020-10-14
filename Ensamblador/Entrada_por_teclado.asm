.data
	m1: .asciiz "Introduce un numero: \n" 
	m2: .asciiz "Se ha introducido: \n"
.text

	main:
		li $v0,4
		la $a0,m1
		syscall
		
		li $v0,5   #Se guarda en v0 lo introducido
		syscall
		
		move $t0,$v0 # Lo almacenamos en t0
		li $v0,4
		la $a0,m2
		syscall#imprime m2
		
		li $v0,1
		move $a0,$t0
		syscall # imprime lo que hayu en t0
		
	
	li $v0,10
	syscall##fin main