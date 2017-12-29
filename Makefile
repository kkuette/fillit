# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdenion <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/26 06:59:41 by tdenion           #+#    #+#              #
#    Updated: 2016/03/24 17:02:07 by ebonafi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FILES = fillit.c \
	error.c \
	error2.c \
	create_map.c \
	resolve.c \
	ft_cut.c \
	ft_put.c \
	lst.c \

LIB = libft.a

INCLUDES = fillit.h

FLAGS = -Wall -Wextra -Wall

OBJETS = $(FILES:.c=.o)

all:$(NAME)

$(NAME):
	@echo "\033[33;31m"
	@cd lib && make all && mv libft.a .. && cd ..
	@ gcc -g -c $(FLAGS) $(FILES) -I $(INCLUDES)
	@echo "\n <<Compilation>> \n <<//fillit>>\n"
	@ gcc -g -o $(NAME) $(OBJETS) $(LIB)


clean:
	@echo "\033[33;32m"
	@cd lib && make clean && cd ..
	@rm -rf $(OBJETS) $(LIB)
	@echo "\n \033[33;32m <<Suppression des objets>> \n <<//fillit>>\n"

cleanl:
	@rm -rf $(OBJETS) $(LIB)
	@echo "\n \033[33;32m <<Supression des objets>> \n <<//fillit>>\n"

fclean:cleanl
	@cd lib && make fclean && cd ..
	@rm -rf $(NAME)
	@echo "\n \033[33;33m <<Supression de l'executable>> \n <<//fillit>>\n"

re: fclean all
