.data
	p: .word 12,4,4,56,4,6
	n: .word 6
		
#Programar en lenguaje C (*) y en ensamblador MIPS una función llamada cuenta, 
#que reciba como parámetros:
#Un puntero p, que debe apuntar a un vector de números enteros en formato HALFWORD.
#Un número N, que indica el cardinal (número de elementos) de ese vector.
#Un número K, que es el número que hay que buscar en el vector.

#La función debe devolver dos resultados: En $v0, el número de veces que aparece
#el número K dentro del vector apuntado por p, y en $v1 el número de elementos 
#del vector que son distintos de K. Por ejemplo, si el vector contiene los 
#elementos {12, 34, 56, 34, 78, 34, 12, 19} y se indica K=34, debe devolver $v0==3 y $v1==5

.text 
main:
	li $t0,0 #numero crecimiento
	lw $t5,n
	li $t1,0 #contador de iguales
	lw $t3,n #Fin de bucle
	lw $t2,n #contador de numeros distintos (distintos=total-iguales)
	
	while:
		beq $t0,$t3,sal
		lw $t4,p($t0)
		lw $t6,p($t5)
		beq $t4,$t5,iguales
		c_while1:
		
	
	j while 
	
	sal:
	# Imprimir valores
		move $v0,$t1 #v0 es el contador de iguales
		sub $t2,$t2,$t1
		move $v1,$t2
	
	
li $v0,10
syscall
	iguales:
	addi $t1,$t1,1
	move $t7,$t4
	j c_while1


