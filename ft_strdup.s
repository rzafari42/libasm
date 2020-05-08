section	.text
global	ft_strdup
extern	ft_strlen
extern	ft_strcpy
extern	malloc

ft_strdup:
	push	rbp
	;call	ft_strlen
	inc 	rax
	mov	r8,rdi
	mov	rdi,rax
	call	malloc
	cmp	rax,0
	jle	malloc_error
	mov	rsi,r8
	mov	rdi,rax
	;call	ft_strcpy
	pop	rbp
	ret

malloc_error:	
	XOR rax,rax
	ret
