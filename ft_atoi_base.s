extern _ft_strlen
extern _index_of

section .text
	global _ft_atoi_base

;ft_atoi_base(const char *str, const char *base);rdi, rsi
_ft_atoi_base: 
	xor rcx, rcx
	xor rdx, rdx
	xor rax, rax
	
	push rdi
	mov rdi, rsi
	call _ft_strlen
	cmp rax, 2
	jl error	
	pop rsi
	jmp parse

next_char:
	inc rcx
parse:
	mov r8b, [rsi + rcx]
	cmp r8b, 0
	je end
	push rd
	call _index_of


error:
	mov rax, 0
end:
	ret
