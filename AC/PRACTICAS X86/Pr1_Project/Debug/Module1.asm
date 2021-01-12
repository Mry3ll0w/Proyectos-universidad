.Const

.Data

;=======================================================
;Ejercicio 1: Declare el vector de 4 elementos tipo Word
;=======================================================
vector DW 1, 2, 3, 4

.Code

start:

	;=================================================================
	;Ejercicio 2: Calcule el sumatorio de los 4 componentes del vector
	;             El resultado debe quedar en EAX.
	;=================================================================
	xor eax, eax 			; limpiamos eax para asegurarnos que la parte alta de eax esta limpia
	mov ax, [vector] 		; Se necesita ax ya que el formato word es de 16 bits
	add ax, [vector + 2]    ; El desplazamiento se realiza de dos en 2 ( 2 bytes = 16 bits )
	add ax, [vector + 4]
	add ax, [vector + 6]

	;=================================================================
	;Ejercicio 3: Divida por 4 el sumatorio sin usar DIV ni IDIV
	;             El resultado debe quedar en EAX.
	;=================================================================
	shr eax, 2 ; Hace un desplazamiento hacia la derecha de 2  -> que es o mismo que div entre 2^2



	Xor Eax, Eax
	Invoke ExitProcess, Eax

