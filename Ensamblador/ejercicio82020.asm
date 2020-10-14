.data
valor: .word 0xa,0xb,0x01,0x02


.text
.globl main
#####################################################################################
# De la misma manera que en el ejercicio anterior, modificar esta vez el cálculo del # 
# desplazamiento para realizarlo mediante un desplazamiento de bits 		     #
# (equivalente a multiplicar por una potencia de 2).				     #
#####################################################################################
main:
	li $t5,2
	move $t0,$zero # $t0<-- "indice" con valor inicial 0
	move $t1,$zero # $t1<-- "suma" con valor inicial 0
	li $t2,4       # $t2<-- constante
	la $s0, valor  # $s0 ? puntero a ‘valor’
bucle:
	##add $t3,$t0,$t0 # t3 = indice +indice = 2 * indice
	sll $t3,$t3,2 #desplaza a la izquierda 2 bytes
	
	##add $t3,$t3,$t3 # t3 = 2*indice + 2*indice = 4 * indice
	sll $t3,$t3,2 #desplaza a la izquierda nº de bytes que contiene t3
	
	add $t4,$s0,$t3 # Suma del desplazamiento a la dirección base, t1= base + 4*i
	lw $s1,0($t4) # Carga del elemento referenciado por la dirección 
		      # guardada en t1, se carga en s1
	add $t1,$t1,$s1 # Suma el elemnto a la suma anterior
	add $t0,$t0,1 # Incremento del indice
	blt $t0,$t2,bucle # Repite el bucle si no se ha llegado al ultimo elemento(indice<4)