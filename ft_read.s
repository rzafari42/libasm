global ft_read

ft_read:
	mov rax,0 		  ;put the number corresponding to sys_read in rax
	syscall			  ;ask the OS to call the correct function
	jc exit			  ;if it returns a negative value => exit
	ret				  ;else: return the value returned by 'read'

exit:
	mov rax,-1		  ;if 'read' returns a negative value, we put '-1' in rax
	ret				  ; we return rax
