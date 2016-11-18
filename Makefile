# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlievre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 15:43:15 by dlievre           #+#    #+#              #
#    Updated: 2016/11/18 15:41:57 by dlievre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIB = libft.a
LIB_FILES = ft_strdup.c ft_strlen.c ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_strcmp.c ft_strncmp.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strlcat.c ft_strncat.c ft_strchr.c ft_strrchr.c ft_putchar.c ft_putnbr.c ft_putstr.c 
OBJ = $(LIB_FILES:.c=.o)# echange des .c en .o

GCC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = -I includes
GCC_LIB = -L. $(LIB)

all: $(NAME)

$(NAME): $(OBJ)
		$(GCC) $(FLAGS) $(HEADER) -c $(LIB_FILES)
		ar rc $(LIB) $(OBJ)
		ranlib $(LIB)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(LIB)

re: fclean all

