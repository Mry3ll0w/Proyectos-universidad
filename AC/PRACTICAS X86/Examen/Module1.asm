;EasyCodeName=Module1,1
; *****************************************
; **
; **  D A T O S    D E L    A L U M N O
; **
; **  Nombre: Antonio
; **  Apellidos: Roldan Andrade
; **  Grupo de Laboratorio: D5
; **
; *****************************************
.Const

.Data
CadFin 		db	"El Programa ha terminado satisfactoriamente"
CadEndLine	db 10, 13, 0
vec1		dw 1, 2, -3, 4, 5, 6, -7, 8, 9, 10
vec2		dd 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
; ****** Reserve la memoria que necesite a partir de aqui ******


.Code

start:
;Inicio del programa principal.       ;01************************************
                                      ;02** NO TOCAR ESTA PARTE DEL CODIGO **
        invoke SubMain                ;03** NO TOCAR ESTA PARTE DEL CODIGO **
                                      ;04** NO TOCAR ESTA PARTE DEL CODIGO **
        Invoke printf, addr CadFin    ;05** NO TOCAR ESTA PARTE DEL CODIGO **
        add esp, 4                    ;06** NO TOCAR ESTA PARTE DEL CODIGO **
        Invoke system, "pause"        ;07** NO TOCAR ESTA PARTE DEL CODIGO **
        Xor Eax, Eax                  ;08** NO TOCAR ESTA PARTE DEL CODIGO **
        Invoke ExitProcess, Eax       ;09** NO TOCAR ESTA PARTE DEL CODIGO **
                                      ;10** NO TOCAR ESTA PARTE DEL CODIGO **
;Fin del programa principal           ;11************************************

; ********************************
; **  E M P E Z A R    A Q U I  **
; ********************************
	Invoke cpy, [vec1], [vec2]

	Invoke printf, "El numero de negativos %d\n", ecx

; subprograma principal
SubMain:
        push ebp
        mov ebp, esp
        
        pop ebp
        ret


;Subprogramas,funciones o rutinas:
;Hacer una función con dos parámetros que copie los elementos del primer vector en el segundo
cpy: ; primer param vec1, segundo param vec2
	push ebp
	mov ebp, esp
	xor ecx, ecx ;
	xor edx, edx ; limpiar memoria de edx par a eliminar restos
	mov eax, [ebp + 8] ; eax contiene dir del primer parametro
	mov ebx, [ebp + 12] ;ebx contiene dir del segundo parametro
while:
	cmp edx, 10
	je > ex_while
	mov ebx, [eax + 8 * edx]  ; copiamos el elemento de vec1 en vec2
	;compara si son negativos
	cmp ebx, 0
	jl > inc_neg
cont:
	inc edx ; edx ++
	jmp while

ex_while:
	ret 8
inc_neg:
	inc ecx ; ecx contiene el total de numeros negativos
	jmp cont