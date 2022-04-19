# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/26 17:31:06 by rlouvrie          #+#    #+#              #
#    Updated: 2022/03/27 22:05:37 by rlouvrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "rush-02"
FLAG = -Wall -Werror -Wextra
SRCDIR = src
OBJDIR = obj
SRC =  $(wildcard $(SRCDIR)/*.c)
OBJ = $(SRC:$(SRCDIR)/%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ) 
	gcc $(FLAG) -o $@ $^

$(OBJ) : $(SRC)
	gcc $(FLAG) -c $(SRC)

clean:
	/bin/rm -r *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
