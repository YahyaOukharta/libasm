section .text
	global _ft_lst_size

_ft_lst_size: ;rdi = t_list *lst
	xor rax, rax
	mov r8 , rdi
	cmp r8, 0
	je end
	inc rax
	jmp loop

next_element:
	mov r8, [r8 + 8]
	inc rax
loop:
	mov rbx, [r8 + 8]
	cmp rbx, 0
	jne next_element
end:
	ret
