.data
	men: .asciiz "Introduce el numuero de repeticiones de la serie\n"
	resu: .asciiz "El resultado es: "
	uno: .float 1.00
	cero: .float 0.00
 
.text 
main:
	lwc1 $f1,uno #t1=i
	lwc1 $f3,cero # donde se va a dividir 1/t1
	lwc1 $f4,uno 
	lwc1 $f6,uno# auxiliar para while
	li $v0,4
	la $a0,men
	syscall
	li $v0,6 # Prepara v0 par arecibir entrada tipo flotante 
	syscall	 #lo introducido se guarda en f0
	add.s $f2,$f0,$f4	
	
	while:
		c.eq.s  $f1,$f2
		bc1t sal
		div.s $f3,$f4,$f1
		add.s $f5,$f5,$f3
		add.s $f1,$f1,$f6
	j while
	
	sal:
		li $v0,4
		la $a0,resu
		syscall
		
		lwc1 $f7,cero
		li $v0,2
		add.s $f12,$f5,$f7
		syscall
li $v0,10
syscall	
	


