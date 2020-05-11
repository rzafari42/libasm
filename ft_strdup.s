section .text
extern	ft_strlen
extern	ft_strcpy
extern	malloc
global	ft_strdup

ft_strdup:
	call	ft_strlen	;rax = ft_strlen(rdi);
	inc	rax		; rax = rax + 1 (append the '\0')
	push	rdi		;save rdi before we change it
	mov	rdi,rax		;rdi = rax (len), because malloc need it to know which size to allocate
	call	malloc
	cmp	rax,0		;if malloc returned a negative value
	jz	malloc_error	;exit
	pop	rsi		;rsi takes the value wue pushed at the begining, so rsi = (old)rdi = src
	mov	rdi,rax		;rdi takes the address to the allocated memory
	call	ft_strcpy	;call ft_strcpy(const char *dst, const char *src) w/ dst = rdi & src = rsi
	ret
	
malloc_error:
	ret
