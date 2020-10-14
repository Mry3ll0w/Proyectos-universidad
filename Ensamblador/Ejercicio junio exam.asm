.data 
	prueba: .asciiz "kbesa"
	
.text 
.globl main
main:
	
	la $a1,prueba #==> T0 contiene el tamaño de la cadena
	jal rot13
	
	li $v0,4
	la $a0,prueba
	syscall
	
li $v0,10
syscall

rot13:
	
	li $t0,0 #Contador tam
	bucle_tam: #Hallamos el tamaño de la cadena introducida
 		add $t3,$a1,$t0
 		lb $t2,0($t3)
 		beq $t2,'\0',sal_tam #Si t2='\0'
 		addi $t0,$t0,1
 		
 	j bucle_tam
	sal_tam:
	move $s0,$t0#s0 Contiene el tamaño
	li $t1,0 #iterador de la cadena
	bucle_sumas:
		add $t3,$a1,$t1
 		lb $t2,0($t3)
		beq $t1,$s0,fin_bl 
		bge $t2,65,comparador1
		
		cont:
		
		addi $t1,$t1,1
	j bucle_sumas

	fin_bl:
jr $ra
comparador1:
	bge $t2,77,comp2
	ble $t2,77,suma
	con_cp1:
	sb $t2,0($t3)
j cont	
	
comp2:
	ble $t2,90,resta
	con_cp2:
	sb $t2,0($t3)
j cont

suma:
	addi $t2,$t2,13
j con_cp1

resta:
	subi $t2,$t2,13
j con_cp2