NAME =	libasm.c
SRC =	ft_read.s ft_strcmp.s ft_strcpy.s\
	ft_strdup.s ft_strlen.c ft_write.s\

OBJ =	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar	rc $(NAME)	$(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)
fclean:	clean
	/bin/rm -f $(NAME)
re:	fclean all

.PHONY:	all clean fclean re