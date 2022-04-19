# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 14:38:59 by rlouvrie          #+#    #+#              #
#    Updated: 2022/03/31 14:57:54 by rlouvrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/bin/sh

SRC="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"
OBJ="ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o"
/bin/gcc -Wall -Werror -Wextra -c $SRC
/bin/gcc-ar rc libft.a $OBJ
/bin/rm -f $OBJ
