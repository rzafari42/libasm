#ifndef LIBASM_H
# define LIBASM_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>

typedef	struct		s_list
{
	void	*data;
	struct	s_list	*next;
}			t_list;

size_t	ft_strlen(const char *s);
ssize_t	ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fd, void *buf, size_t count);
char	*ft_strcpy(char *dst,const char *src);
char	*ft_strdup(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_len(void);
void	ft_cpy(void);
void	ft_cmp(void);
void	ft__write(void);
void	ft__read(void);
void	ft_dup(void);
#endif
