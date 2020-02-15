section .text
		global _ft_list_size

_ft_list_size: ;rdi = t_list *lst
	xor rax, rax
	mov r8, rdi
	cmp r8, 0
	je end
	inc rax
	jmp lo
next_element:
	inc rax
lo:
	mov r8, [r8 + 8]
	cmp r8, 0
	je end
	jmp next_element
end:
	ret