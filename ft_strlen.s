global	ft_strlen

ft_strlen:
	XOR rax,rax		;rax = 0
	jmp count		;jump to count

count:
	cmp byte[rdi + rax], 0 ;we compare rdi[rax] with '0'
	jz exit				   ;if equal =>exit
	inc rax				   ;if not equal, we increment rax
	jmp count			   ;then we do it again and again until rdi[rax] != 0

exit:
	ret					   ;we return the rax value
