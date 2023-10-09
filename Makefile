CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libft.a

SRCS	=	$(wildcard *.c)

OBJECTS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS)
			ar rc $(NAME) $(OBJECTS)
%.o:	%.c
		$(CC) $(CFLAGS) -c $< -o $@
clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re:		fclean all 

.PHONY: clean fclean re all