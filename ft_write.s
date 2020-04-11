global	_ft_write

_ft_write:
	mov rax,0x2000004  ;put the number corresponding to sys_write in rax
	syscall			   ;ask the OS to call the correct function (write)
	jc exit			   ;if it return a negative value => exit
	ret				   ;else: return the value returned by 'write' (number of character effectively read)

exit:
	mov rax,-1		   ;if 'write' return a negative value, we put '-1' in rax
	ret				   ;then we return rax
