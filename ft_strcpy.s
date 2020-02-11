section .text
	global _ft_strcpy

; char	*ft_strcpy(char *dst,char *src); dst : rdi, src : rsi 
_ft_strcpy:	
			push rdi
			cmp rdi, 0
			je end
			cmp rsi, 0
			je end
	copy:	mov al, [rsi]
			mov [rdi], al
			inc rsi
			inc rdi
			cmp byte [rsi], 0
			jne copy
			mov al, [rsi]
			mov [rdi], al
	end:	pop rax
			ret

