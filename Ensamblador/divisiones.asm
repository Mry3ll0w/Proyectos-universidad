.data
 salto: .asciiz "\n"
 cociente: .asciiz "\ncociente de la division:"
 resto: .asciiz "\nResto de la division: "
.text
	li $s1,40
	li $s2,4
	div $t0,$s1,$s2 #t0=s1/s2
	
	li $v0,1
	move $a0,$t0
	syscall
	
	li $v0,4
	la $a0,salto
	syscall
	
	div $t1,$s1,5  ##Podemos dividir entre un numero que queramos
	li $v0,1
	move $a0,$t1
	syscall
	
	li $v0,4
	la $a0,salto
	syscall
	
	li $t3,45
	li $t4,6
	div $t3,$t4	#Dividir usando dos registros, se guarda el cociente en lo, resto en hi
	mflo $t5
	mfhi $t6
	
	li $v0,4
	la $a0,cociente
	syscall
	li $v0,1
	move $a0,$t5
	syscall
	
	li $v0,4
	la $a0,resto
	syscall
	li $v0,1
	move $a0,$t6
	syscall
	
	
	
	