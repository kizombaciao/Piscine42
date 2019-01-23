# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchao <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/22 22:06:04 by jchao             #+#    #+#              #
#    Updated: 2019/01/22 22:06:13 by jchao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = ./src/*.c

HEADER = ./includes/

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC) -I $(HEADER)
	gcc -o $(NAME) *.o

clean:
	rm -f *.o
	rm -f *~

fclean:
	rm -f $(NAME) *.o

re: fclean all
