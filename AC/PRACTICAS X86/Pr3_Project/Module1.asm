;EasyCodeName=Module1,1
.Const

.Data
msg1	db "Introduzca la operacion en formato (num [+-*/] num): ", 0
msg2	db "El resultado es: ", 0
msg3	db 10, 13, 0

operando1 dd 0
operando2 dd 0
operador dd 0

.Code

start:
;Inicio del programa principal.

	Invoke printf, addr msg1
	add esp, 4
	Invoke scanf, "%d %c %d", addr operando1, addr operador, addr operando2
	add esp, 16

w_s:	cmp D[operador], '+'
		jne > w_r
		Invoke suma, [operando1], [operando2]
		jmp > w_end

w_r:	cmp D[operador], '-'
		jne > w_m
		Invoke resta, [operando1], [operando2]
		jmp > w_end

w_m:	cmp D[operador], '*'
		jne > w_d
		Invoke multi, [operando1], [operando2]
		jmp > w_end

w_d:	cmp D[operador], '/'
		jne > w_end
		Invoke divi, [operando1], [operando2]
		jmp > w_end

w_end:

	Invoke printf, "%s %d %s", addr msg2, eax, addr msg3

	Xor Eax, Eax
	Invoke ExitProcess, Eax

;Fin del programa principal

;Subprogramas:

suma: push ebp
	  mov ebp, esp

	  mov eax, [ebp + 8]
	  add eax, [ebp + 12]

	  pop ebp
	  ret 8

resta: push ebp
	   mov ebp, esp

	   mov eax, [ebp + 8]
	   sub eax, [ebp + 12]

	   pop ebp
	   ret 8

multi: push ebp
	  mov ebp, esp

	  mov eax, [ebp + 8]
	  mul D[ebp + 12] ; eax = eax * [ebp+12]

	  pop ebp
	  ret 8

divi: push ebp
	  mov ebp, esp

	  mov eax, [ebp + 8]
	  div D[ebp + 12]

	  pop ebp
	  ret 8
