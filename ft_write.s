global	ft_write

ft_write:
	mov rax,1		   ;put the number corresponding to sys_write in rax
	syscall			   ;ask the OS to call the correct function (write)
	jc exit			   ;if it returns a negative value => exit
	ret				   ;else: return the value returned by 'write' (number of character effectively read)

exit:
	mov rax,-1		   ;if 'write' returns a negative value, we put '-1' in rax
	ret				   ;then we return rax
