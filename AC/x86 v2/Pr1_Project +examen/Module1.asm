;EasyCodeName=Module1,1
.Const

.Data
v1 dw 1, 2, 3, 4, 5
v2 dd 0, 0, 0, 0, 0
v_neg dw 0

.Code

start:

	mov ecx, addr v1
	mov edx, addr v2

	push addr v1 ; p==>  v1
	push addr v2 ; p==>  v2 v1
	invoke funcion



	xor eax, eax
fin:

	Xor Eax, Eax
	Invoke ExitProcess, Eax


funcion:
	push Ebp
	mov ebp, esp
	mov ecx, 0 ; Iterador tipo double
	mov eax, 0 ; Tiene el contador de neg

while:
	cmp ecx, 5
	je > fin_w
	mov edx, [v1 + ecx * 4] ; edx = v1[ecx]
	mov [v2 + ecx * 8], edx ; v1[ecx] = v2[edx]
	cmp edx, 0
	jb > inc_neg
cont:
	inc ecx
fin_w:
	pop ebp
	ret

inc_neg: ;Incrementa el numero de negativos
	inc eax
	mov [v_neg], eax
	jmp cont