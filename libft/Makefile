# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 15:48:51 by yrabby            #+#    #+#              #
#    Updated: 2019/04/02 16:13:40 by yrabby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strlen.c \
	  ft_strdup.c

OBJ = ft_strlen.o \
	  ft_strdup.o

HED = libft.h

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
		gcc $(FLAG) -c $(SRC) -I$(HED)
		ar rv $(NAME) $(OBJ)
		ranlib $(NAME)
		/bin/rm -f $(OBJ)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
