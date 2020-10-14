.data
	palabra: .asciiz "Imprime" #creamos la variable
.text
	li $v0,4        # prepara el v0 para imprimir
	la $a0, palabra  #Carga la direccion de palabra en t0 
	syscall