# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nikotine <nikotine@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/15 13:46:00 by nsalles           #+#    #+#              #
#    Updated: 2023/12/30 13:13:25 by nikotine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libft.a

SRCS	=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \
			get_next_line.c \
			get_next_line_utils.c \
			ft_printf.c \
			ft_printf2.c

OBJECTS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJECTS)
	@echo "$(COM_COLOR)clean libft:                 $(OK_COLOR)[✓]$(NO_COLOR)"
fclean:
	rm -f $(OBJECTS)
	rm -f $(NAME)
	@echo "$(COM_COLOR)fclean libft:                $(OK_COLOR)[✓]$(NO_COLOR)"
re:		fclean all 

.PHONY: clean fclean re all

COM_COLOR   = \033[0;34m
OK_COLOR    = \033[0;32m
NO_COLOR    = \033[m