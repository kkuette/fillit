# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdenion <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/21 15:16:14 by tdenion           #+#    #+#              #
#    Updated: 2016/03/24 17:03:02 by ebonafi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
INCLUDE= libft.h
FILES=ft_putstr.c \
	ft_putstr_fd.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_bzero.c \
	ft_memset.c \
	ft_putendl.c \
	ft_putendl_fd.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_strcpy.c \
	ft_strncpy.c \
	ft_strlen.c \
	ft_tolower.c \
	ft_charcmp.c \
	ft_memcpy.c \
	ft_strdup.c \
	ft_toupper.c \
	ft_strncmp.c \
	ft_strcmp.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_memcmp.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_atoi.c \
	ft_isprint.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isascii.c \
	ft_isalnum.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strncat.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strstr.c \
	ft_strncat.c \
	ft_memalloc.c \
	ft_memdel.c \
	ft_strnew.c \
	ft_strdel.c \
	ft_strclr.c \
	ft_strequ.c \
	ft_strnequ.c \
	ft_strsub.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_strsplit.c \
	ft_strrev.c \
	ft_itoa.c \
	ft_strsncpy.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_lstnew.c \
	ft_lstadd.c \
	ft_lstdelone.c \
	ft_strfjoin.c \
	ft_lstdel.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_strlen_bc.c \
	ft_cword_bc.c \
	ft_nbrlen.c \

OBJET= $(FILES:.c=.o)

all:$(NAME)

$(NAME):
	@echo "\n \033[33;31m <<Compilation>> \n <<//libft>>\n"
	@	gcc -c -Wall -Werror -Wextra $(FILES) -I $(INCLUDE)
	@	ar rc $(NAME) $(OBJET)

clean:
	@echo "\n \033[33;32m <<Suppression des objets>> \n <<//libft>>\n"
	@	rm -f $(OBJET)

fclean:clean
	@echo "\n \033[33;33m <<Suppression de l'executable>> \n <<//libft>>\n"
	@	rm -f $(NAME)

re: fclean all
