.Const

.Data

frecuencias DW 0, 260, 300, 330, 350, 390, 440, 500, 520, 590, 660, 700
notas DW 7, 8, 9, 9, 8, 7, 6, 5, 5, 6, 7, 7, 6, 6, 7, 8, 9, 9, 8, 7, 6, 5, 5, 6, 7, 6, 5, 5, 6, 6, 7, 5, 6, 7, 8, 7, 5, 6, 7, 8, 7, 6, 5, 6, 2, -1
tempos DW 2000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 2000, 500, 500, 2000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1500, 500, 2000, 2000, 1000, 1000, 1000, 500, 500, 1000, 1000, 1000, 500, 500, 1000, 1000, 1000, 1000, 2000, 2000

.Code

start:

	;==========================================================================================================================
	;EJERCICIO 1:
	;
	;Complete el programa. Recuerde, para invocar la funcion:
	;
	; pusha
	; Invoke Beep, frecuencia_nota, duracion_nota_ms
	; popa
	;==========================================================================================================================
	xor eax, eax		; Limpiamos la parte alta de la memoria
	xor ecx, ecx		; Limpiamos el cursor del bucle en 32 bits, ya que solo se admiten para el desp de 32 bits
	xor ebx, ebx		; Limpiamos la parte alta de la memoria
	xor edx, edx		; Limpieza
;Bucle a partir de aqui
while:

	mov ax, [notas + ecx * 2]	; ax = notas[ecx]
	cmp ax, -1
	je > fin_while 				; si la nota que se pasa es -1 entonces sal del bucle, se pone > ya que esta abajo

	mov bx, [tempos + ecx * 2]	; bx = tempos[ecx]
	mov dx, [frecuencias + eax * 2] ; dx = frecuencias[notas]

	pusha
	Invoke Beep, edx, ebx
	popa

	inc ecx 					; ecx++
	jmp while

fin_while:




	Xor Eax, Eax
	Invoke ExitProcess, Eax
