.Const

.Data

frecuencias DW 0, 260, 300, 330, 350, 390, 440, 500, 520, 590, 660, 700
notas DW 7, 8, 9, 9, 8, 7, 6, 5, 5, 6, 7, 7, 6, 6, 7, 8, 9, 9, 8, 7, 6, 5, 5, 6, 7, 6, 5, 5, 6, 6, 7, 5, 6, 7, 8, 7, 5, 6, 7, 8, 7, 6, 5, 6, 2, -1
tempos DW 20, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 2000, 500, 500, 2000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1500, 500, 2000, 2000, 1000, 1000, 1000, 500, 500, 1000, 1000, 1000, 500, 500, 1000, 1000, 1000, 1000, 2000, 2000

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
 xor ecx, ecx
 xor ebx, ebx
 xor eax, eax
 xor edx, edx
;1 necesitamos desplazamientos i ==> ecx 2 bytes desp (tipo word)
mov ecx, 0

inicio_bucle:
	mov bx, [notas + ecx * 2] ;ebx=notas[i]
	cmp bx, -1
	je > fin_bucle ;si es notas[i]==-1 sal

	mov ax, [frecuencias + ebx * 2] ; ax=frecuencias[notas[i]]
	mov dx, [tempos + ecx * 2]

	pusha
	Invoke Beep, eax, edx
	popa

	;Iterar ecx i++
	add ecx, 1
	jmp inicio_bucle

fin_bucle:

	Invoke system, "pause"
	Xor Eax, Eax
	Invoke ExitProcess, Eax


