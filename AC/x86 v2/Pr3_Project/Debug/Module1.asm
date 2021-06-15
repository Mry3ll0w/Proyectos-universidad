.Const

.Data
cad db "Introduce la operacion deseada"
cad2 db "El resultado es: "

operador dd 0
op1 dd 0
op2 dd 0

.Code

start:
;Inicio del programa principal.

	Invoke printf, addr cad
	add esp, 4 ; quitamos de la pila cad 4 por cada parametro
	Invoke scanf, "%d %c %d", addr op1, addr operador, addr op2 ; 4 param 3 + 1 de tipos
	add esp, 16

	cmp d[operador], '+'
	je > llamada_sum ;

	cmp d[operador], '-'
	je > l_resta ;

	cmp d[operador], '*'
	je > l_mul ;

	cmp d[operador], '/'
	je > l_div ;


llamada_sum:
  invoke sum, [op1], [op2]
  jmp > fin

l_resta:
	invoke sum, [op1], [op2]
	jmp > fin

l_div:
	invoke divi, [op1], [op2]
	jmp > fin

l_mul:
	  invoke mult, [op1], [op2]
	  jmp > fin
fin:
		Invoke printf, addr cad
		add esp, 4
		Invoke printf, eax

	Invoke system, "pause"
	Xor Eax, Eax
	Invoke ExitProcess, Eax

;Fin del programa principal

;Subprogramas:

sum:
	push Ebp
	mov ebp, esp

	mov eax, [ebp + 8] ; ya que hemos ech o un push antes (primer param)
	add eax, [ebp + 12] ;eax= a + b

	pop ebp
	ret 8 ;ya que tienes 2 parametros tipo word (a + b)

resta:
	push Ebp
	mov ebp, esp

	mov eax, [ebp + 8] ; ya que hemos ech o un push antes (primer param)
	sub eax, [ebp + 12] ;eax= a + b

	pop ebp
	ret 8 ;ya que tienes 2 parametros tipo word (a + b)

mult:
	push Ebp
	mov ebp, esp

	mov eax, [ebp + 8] ; ya que hemos ech o un push antes (primer param)
	mul D[ebp + 12] ;Mul usa predetermindo eax por tanto==> eax = eax* 2o param

	pop ebp
	ret 8 ;ya que tienes 2 parametros tipo word (a + b)

divi:
	push Ebp
	mov ebp, esp

	mov eax, [ebp + 8] ; ya que hemos ech o un push antes (primer param)
	div D[ebp + 12] ;eax= a / b

	pop ebp
	ret 8 ;ya que tienes 2 parametros tipo word (a + b)