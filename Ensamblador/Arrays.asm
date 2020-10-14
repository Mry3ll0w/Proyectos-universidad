.data
 array: .space 12
.text 
	main :
		li $s0,9
		li $s1,5
		li $s2,6
		
		sw $s0,array($t0)
		addi $t0,$zero,4
		sw $s1,array($t0)
		addi $t0,$zero,4
		sw $s2,array($t0)
		
		li $t1,0
		lw $t2,array($t1)
	