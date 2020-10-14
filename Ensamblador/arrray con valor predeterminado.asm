.data 
	array: .word 123:3 # 123 es el valor predeterminado y 3 el numero de veces que aparece
	coma: .asciiz ", "
	fin: .asciiz "\nfin"
.text 

	main:	
		
		
		li $s0,9
		li $s1,5
		li $s2,6
		
		li $t1,0	#t1= i 
			while:
				bge $t1,12,exit # si es mayor t1 que 12 sal 4*3 elemntos
				lw $t2,array($t1)
				addi $t1,$t1,4
				
				li $v0,1
				move $a0,$t2
				syscall
				
				li $v0,4
				la $a0,coma
				syscall
				
				j while
				
			exit:
				li $v0,4
				la $a0,fin
				syscall
			
	li $v0,10
	syscall
	
