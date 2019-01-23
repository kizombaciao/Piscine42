NAMELIB = libft.a
SRC = ./src/ft_putchar.c ./src/ft_strcmp.c ./src/ft_putstr.c ./src/ft_strlen.c ./src/ft_swap.c
HEADER = ./includes/ft.h
FLAG = -Wall -Wextra -Werror

all: $(NAMELIB)

$(NAMELIB):
	gcc $(FLAG) -c $(SRC) -I $(HEADER)
	ar rc $(NAMELIB) *.o
	ranlib $(NAMELIB)

clean:
	rm -f *.o

fclean:
	rm -f $(NAMELIB) *.o

re: fclean all
