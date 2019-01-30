# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeltsev <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/27 18:58:57 by aeltsev           #+#    #+#              #
#    Updated: 2019/01/27 19:03:27 by aeltsev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRCS = srcs/rush2.c srcs/ft_putnbr.c srcs/ft_putchar.c srcs/ft_putstr.c
INCLUDES = includes/

all: $(NAME)

$(NAME):
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRCS) -I $(INCLUDES)

clean:
	/bin/rm -f $(NAME)

fclean:	clean
