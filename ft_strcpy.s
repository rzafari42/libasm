section	.text
global	ft_strcpy

ft_strcpy:
	XOR	rax,rax
	jmp	cpy_src_dst

cpy_src_dst:
	cmp	byte[rsi + rax],0
	jz	exit
	mov	rcx,[rsi + rax]
	mov	[rdi + rax],rcx
	inc	rax
	jmp	cpy_src_dst

exit:
	mov	rcx,0
	mov	[rdi + rax], rcx
	mov	rax, rdi
	ret
