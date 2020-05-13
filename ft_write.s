section	.text
global	ft_write
extern	__errno_location

ft_write:
	mov rax,1		;put the number corresponding to sys_write in rax
	syscall			;ask the OS to call the correct function (write)
	cmp rax,0
	jl exit			;if it returns a negative value => exit  and rax = errno
	ret			;else: return the value returned by 'write' (number of character effectively read)

exit:
	mov r10,rax		;put errno in r8
	call __errno_location	;call __errno_location to get the address of errno
	neg r10
	mov [rax],r10
	mov rax,-1		;if 'write' returns a negative value, we put '-1' in rax
	ret			;then we return rax
