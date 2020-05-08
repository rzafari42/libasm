section	.text
global	ft_write
extern	__errno_location

ft_write:
	mov rax,1
	mov rbx, rdi
	mov rcx, rsi		;put the number corresponding to sys_write in rax
	syscall			;ask the OS to call the correct function (write)
	cmp rax, 0
	jl .syscall_error			;if it returns a negative value => exit  and rax = errno
	ret			;else: return the value returned by 'write' (number of character effectively read)

.syscall_error:
	neg rax
	mov rdx,rax
	call __errno_location
	mov [rax], rdx
	mov rax, -1
	ret
