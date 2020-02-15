section .text
	global _ft_strcpy

; char	*ft_strcpy(char *dst,char *src); dst : rdi, src : rsi 
_ft_strcpy:	
			mov r8, rdi
			cmp r8, 0
			je end
			cmp rsi, 0
			je end
	copy:	mov al, [rsi]
			mov [r8], al
			inc rsi
			inc r8
			cmp byte [rsi], 0
			jne copy
			mov al, [rsi]
			mov [r8], al
	end:	mov rax, rdi
			ret
