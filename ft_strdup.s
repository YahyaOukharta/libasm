extern _ft_strlen
extern _malloc
extern _ft_strcpy

section .text
	global _ft_strdup

; char *ft_strdup(char *s); s = rdi
_ft_strdup:
	push rdi

	call _ft_strlen
	
	mov rdi, rax
	inc rdi
	call _malloc

	cmp rax, 0
	jne copy
	mov rax, 0
	ret
copy:	
	mov rdi, rax
	pop rsi
	call _ft_strcpy
	ret
	
