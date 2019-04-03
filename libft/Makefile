# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 15:48:51 by yrabby            #+#    #+#              #
#    Updated: 2019/04/03 13:52:47 by yrabby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = src/ft_strlen.c \
	  src/ft_strdup.c \
	  src/ft_atoi.c \
	  src/ft_strcmp.c \
	  src/ft_strncmp.c \
	  src/ft_strcpy.c \
	  src/ft_strncpy.c \
	  src/ft_strchr.c \
	  src/ft_strrchr.c \
	  src/ft_strstr.c \
	  src/ft_strnstr.c \
	  src/ft_isalpha.c \
	  src/ft_isdigit.c \
	  src/ft_isascii.c \
	  src/ft_isprint.c \
	  src/ft_isalnum.c

OBJ = ft_strlen.o \
	  ft_strdup.o \
	  ft_atoi.o \
	  ft_strcmp.o \
	  ft_strncmp.o \
	  ft_strcpy.o \
	  ft_strncpy.o \
	  ft_strchr.o \
	  ft_strrchr.o \
	  ft_strstr.o \
	  ft_strnstr.o \
	  ft_isalpha.o \
	  ft_isdigit.o \
	  ft_isascii.o \
	  ft_isprint.o \
	  ft_isalnum.o

HED = includes/libft.h

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
