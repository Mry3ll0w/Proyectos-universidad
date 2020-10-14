

#Utilizando la función del apartado anterior, escribir un programa 
#en ensamblador MIPS que recorra dos vectores de 10 enteros llamados 
#respectivamente A y B, y para cada pareja de valores (A[i], B[i]) guarde el
#mayor de ambos en la posición correspondiente del vector C

.data 
	vect: .word 1,2,6,7,3
	n: .word 20
	men: .asciiz "\nEl mas grande es: "
.text
main:
	li $t0,4 # contador while  
	li $t1,20
	lw $t4, vect($t0) #t4 = vect[n]=mayor
	while:
		beq $t1,$t3,sal     
		addi $t3,$t0,4 		# t3 = vect[n-1]
		lw $t5,vect($t3)
		blt $t4,$t5,mayor 
		continua: ##continua
	j while 
	sal:
	
	li $v0,4
	la $a0,men
	syscall
	li $v0,1
	move $a0,$t4 # t7 es el mayor
	syscall




li $v0,10
syscall
mayor:
	move $t4,$t5
j continua	



