# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/08 14:34:13 by angcasad          #+#    #+#              #
#    Updated: 2026/01/12 12:26:11 by angcasad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I . -I Libft #buscamos los includes tmbn.
LIBFT = Libft/libft.a #incluimos esto para que compile Libft tmbn.
RM = rm -f
AR = ar rcs

SRC = \
	ft_printf.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
#hacemos make del makefile de Libft (-C es change directory)
	make -C Libft
#copiamos la libreria libft.a dentro del proyect printf, renombrandola compo libfprintf.a
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJ)

clean :
	make clean -C Libft
	$(RM) $(OBJ)

fclean: clean
	make fclean -C Libft
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean re fclean 