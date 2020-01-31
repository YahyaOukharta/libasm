extern _printf
extern _ft_strlen
extern _malloc
extern _ft_strcpy

section .data
	format db "len = %d",0x0a,0
section .text
	global _ft_strdup

; char *ft_strdup(char *s); s = rdi
_ft_strdup:
	push rdi
	
	call _ft_strlen
	
	mov rdi, rax
	inc rdi
	call _malloc

	mov rdi, rax
	pop rsi
	call _ft_strcpy
	
	ret
	
