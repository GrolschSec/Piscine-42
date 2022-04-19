# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 15:07:38 by rlouvrie          #+#    #+#              #
#    Updated: 2022/03/31 17:37:27 by rlouvrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc 
FLAGS=-Wall -Wextra -Werror
INCLUDES=./includes/
SRC=srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJ=${SRC:.c=.o}

.c.o:
	${CC} ${FLAGS} -I${INCLUDES} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	ar rc $@ ${OBJ}

clean:
	/bin/rm -f ${OBJ}

fclean: clean
	/bin/rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
