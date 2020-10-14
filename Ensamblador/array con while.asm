.data 
	array: .space 12
	coma: .asciiz ", "
	fin: .asciiz "\nfin"
.text 

	main:	
		
		
		li $s0,9
		li $s1,5
		li $s2,6
		
		sw $s0,array($t0)
		addi $t0,$zero,4
		sw $s1,array($t0)
		addi $t0,$zero,4
		sw $s2,array($t0)
		
		li $t1,0	#t1= i 
			while:
				bge $t1,12,exit # si es mayor t1 que 12 sal
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
	