# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 15:48:51 by yrabby            #+#    #+#              #
#    Updated: 2019/04/06 15:09:37 by yrabby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC1 = $(wildcard src1/*.c)

SRC2 = $(wildcard src2/*.c)

OBJ = $(wildcard *.o)

HED = includes/libft.h

FLAG = -Wall -Werror -Wextra

all: make_obj

.PHONY: clean fclean re all

.PRECIOUS: $(SRC) $(HED)

make_obj: $(SRC1) $(SRC2) 
		@gcc $(FLAG) -c $^ -I$(HED)

lib: $(OBJ)
		@ar rv $(NAME) $^
		@ranlib $(NAME)
		@/bin/rm -f $^

clean: $(OBJ)
		@/bin/rm -f $^

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
