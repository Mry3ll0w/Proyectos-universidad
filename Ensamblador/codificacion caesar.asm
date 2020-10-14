.data 
	cad: .space 25
	men1: .asciiz "\nIntroduce la cadena a modificar: "
	men2: .asciiz "\nIntroduce el size of char\n"
	cad_dest: .space 25
	#a==97, b==98, c=99,...,z=122 (en teoria solo digitos)
.text 
	
main:
	li $v0,4
	la $a0,men1
	syscall
	
	li $v0, 8 # prepara  para la lectura de cadena
	la $a0, cad # guarda en a0
	la $a1, 25 # Guarda el tamaño d ela cadena
	syscall
	
	li $v0,4
	la $a0,men2
	syscall
	
	li $v0,5
	syscall 
	
	move $t0,$v0 # T0 tiene el tamaño de la palabra
	li $t1,0 # t1 es el contador
	while:
		beq $t1,$t0,sal 
		lb $t2,cad($t1)
		addi $t2,$t2,1 #Incrementamos la el digito obtenido
		sb $t2, cad_dest($t1)
		addi $t1,$t1,1
	j while
	
	sal:
	li $v0,4
	la $a0,cad_dest
	syscall

li $v0,10
syscall
