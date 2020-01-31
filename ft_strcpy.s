section .text
	global _ft_strcpy

; char	*ft_strcpy(char *dst,char *src); dst : rdi, src : rsi 
_ft_strcpy:	
			push rdi
	loop:	mov al, [rsi]
			mov [rdi], al
			inc rsi
			inc rdi
			cmp byte [rsi], 0
			jne loop
			mov al, [rsi]
			mov [rdi], al
			pop rax
			ret

