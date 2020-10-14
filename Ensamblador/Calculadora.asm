.data 
	men: .asciiz "\nIntroduzca el primer numero \n"
	men2: .asciiz "Introduzca otro numero \n"
	menop: .asciiz "Introduza el operador\n"
	resultado: .asciiz "\nEl resultado es: "
	vuelta: .asciiz "\n Si quieres no quieres hacer otra operacion: introduce 1\nSi quieres operar el resultado con otra op: 3\n salir==0\n"
	menop2: .asciiz "Introduza el segundo operador\n"
	salida: .asciiz "El numero introducido no es un numero"
	
.text 
	main:
		li $v0,4
		la $a0,men
		syscall 
		
		li $v0,5
		syscall
		move $t0,$v0 # t0= primer numero
		
		li $v0,4
		la $a0,men2
		syscall 
		
		li $v0,5
		syscall
		move $t1,$v0 # t1= segundo numero numero
		
		li $v0,4
		la $a0,menop
		syscall 
		
		li $v0,12
		syscall
		move $t2,$v0 # t2= operador 
		
		beq $t2,43,suma
		beq $t2,45,resta
		beq $t2,42,multi
		beq $t2,47,divi
		res:
		li $v0,4
		la $a0, resultado
		syscall 
		li $v0,1
		move $a0,$t3 #$t3 =resultado
		syscall
		
		li $v0,4
		la $a0,vuelta
		syscall 
		li $v0,5
		syscall
		move $t4,$v0
		
		beq $t4,1,main
		beq $t4,3,opn
	
	
		li $v0,10
		syscall
	 
		
	
	li $v0,10
	syscall 
	
	suma:
		add $t3,$t0,$t1
	j res
	
	resta: 
		sub $t3,$t0,$t1
	j res
	
	multi:
		 mul $t3,$t0,$t1
	 j res
	 
	divi:
		div $t3,$t0,$t1
	j res
	
	opn:
		li $v0,4
		la $a0,menop2
		syscall 
		
		li $v0,12
		syscall 
		move $t2,$v0
		
		li $v0,4 
		la $a0,men2
		syscall
		
		li $v0,5
		syscall
		move $t5,$v0 # t5= Tercer numero
		
		beq $t2,43,suma2
		beq $t2,45,resta2
		beq $t2,42,multi2
		beq $t2,47,divi2
	suma2:
		add $t3,$t3,$t5
	j res
	
	resta2: 
		sub $t3,$t3,$t5
	j res
	
	multi2:
		 mul $t3,$t3,$t5
	 j res
	 
	divi2:
		div $t3,$t3,$t5
	j res
	
 atoi:
 	
 	li $s1,48
 	li $s2,0# Numero que va a imprimir en caso de que sea un digito
 	while: 
 		beq $s1,58,exit
 		
 		addi $s1,$s1,1
 		addi $s2,$s2,1
 		j while
 	exit:
 		li $v0, 4
 		la $a0, salida 
 		syscall
 	
 	
 ##################################Falta por Implementar la funcion atoi	
 li $v0,10
 syscall
 	
 	
		
	
