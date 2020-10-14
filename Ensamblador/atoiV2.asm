.data
	men: .asciiz "Introduce el caracter/num\n"
	num: .space 20
	res: .asciiz "Es un numero: "
.text
#Programar una función llamada atoi que reciba como parámetro un puntero a cadena. 
#Esa cadena se supone formada por caracteres ASCII numéricos. La función debe
#calcular el valor del número representado por dicha cadena y devolver ese valor 
#como entero. 
#Si se produce un error, se debe devolver el valor -1. Se debe utilizar la anterior
#función isdigit.
#Emplear esta función en un programa principal sencillo para comprobar su funcionamiento.

main: 
	li $v0,4
	la $a0,men
	syscall
	
	li $v0,8
	la $a0,num
	la $a1,20
	syscall
	
	lb $t0,num
	li $t1,48
	
	while:	
		bge $t1,$t0,nodigit
		beq $t1,$t0,continua
		addi $t1,$t1,1
	j while 
	continua:
	digit:
	li $v0,4
	la $a0,res
	syscall
	li $v0,4
	la $a0,num
	syscall

j continua
	
fin:	
li $v0,10
syscall

nodigit:
	li $t3,-1
	li $v0,1
	move $a0,$t3
	syscall
j fin

