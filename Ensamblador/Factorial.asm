.data 
	men: .asciiz "Introduce el numero al cual le haces el factorial: "
	resu: .asciiz "\nEl resultado es: " 
	uno: .float 1.00
	cero: .float 0.00
	dos: .float 2.00
.text 

main:
	
	li $v0,4
	la $a0,men
	syscall 
	
	li $v0,6
	syscall
	add.s $f2, $f0, $f6  # F2 es el numero introducido
	add.s $f1, $f2, $f6  # f1 se ira restando para multiplicar
	lwc1 $f3, uno  # auxiliar cte numerica 
	lwc1 $f5, dos  # auxiliar cte numerica
	lwc1 $f6, cero # auxiliar cte numerica
	lwc1 $f4, cero # f4 se ira sumado para almacenar el resultado
 	
 	while:
 		c.eq.s $f1,$f3
 		bc1t exit
 		mul.s $f4,$f1,$f2 #$f4=f2*f1
 		add.s $f4,$f4,$f6
 		sub.s $f2,$f2,$f3 # $f2=f2-1
 		sub.s $f1,$f1,$f5 # $f1=f1-1
 		
	
	j while
	
	exit:
	     	li $v0,4
	     	la $a0, resu
	     	syscall
	     	
	     	li $v0,2
	     	add.s $f12,$f4,$f6
	     	syscall
	     	

li $v0,10
syscall