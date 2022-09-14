# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 18:59:32 by coder             #+#    #+#              #
#    Updated: 2022/09/11 00:21:45 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_memset.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcpy.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strchr.c\
		ft_strnstr.c ft_strncmp.c

OBJ = ft_isalpha.o ft_isdigit.o ft_memset.o ft_bzero.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_memcpy.o \
		ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_strlen.o ft_tolower.o ft_toupper.o ft_strchr.o\
		ft_strnstr.o ft_strncmp.o

FLAG = -Wall \
	-Werror \
	-Wextra \

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ):	$(SRC)
	gcc $(FLAG) -c $(SRC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
