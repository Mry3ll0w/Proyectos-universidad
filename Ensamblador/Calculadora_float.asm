
.data
	op: .space 10 
	men:.asciiz "Introduce el primer numero\n"
	men2:.asciiz "Introduce el segundo numero\n"
	menop: .asciiz "Introduce la operacion que vas a usar\n"
	zerof: .float 0.00
	unof: .float 1.00
	res: .asciiz "El resultado es: "
	volver:.asciiz "\nSi quieres hacer otra operacion introduce 1\n"
.text
main:
	lwc1 $f4,zerof
	#li $v0,4
	#la $a0,men
	#syscall
	li $v0,6
	syscall
	add.s $f2,$f0,$f4 #F2 Tiene el primer numero leido
	
	#li $v0,4
	#la $a0,men2
	#syscall
	li $v0,6
	syscall
	add.s $f3,$f0,$f4 #F3 Tiene el segundo numero leido
	
	#li $v0,4
	#la $a0,menop
	#syscall
	
	li $v0,8
	la $a0,op
	la $a1,10
	syscall
	
	lb $t0,op
		beq $t0,42,multi
		beq $t0,43,suma
		beq $t0,45,resta
		beq $t0,47,division
		beq $t0,38,potencia
	continua:
		li $v0,4
		la $a0,res
		syscall
		
		li $v0,2
		add.s $f12,$f5,$f4
		syscall
		
		li $v0,4 
		la $a0,volver
		syscall
		li $v0,5
		syscall
		beq $v0,1,main
li $v0,10
syscall

multi:
	mul.s $f5,$f2,$f3
j continua

suma:
	add.s $f5,$f3,$f2 #f5=f3+f2
j continua

resta:
	sub.s $f5,$f2,$f3 #f5= f2-f3
j continua

division:
	div.s $f5,$f2,$f3
j continua

potencia:
	lwc1 $f6,zerof 
	lwc1 $f7,unof
	bucle_pot:
		c.eq.s $f6,$f3
		bc1t continua
		mul.s $f8,$f2,$f2
		add.s $f5,$f8,$f4 #$f5=f4+0.0
		add.s $f6,$f6,$f7
	j bucle_pot





	
		
				
	