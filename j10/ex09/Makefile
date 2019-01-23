NAME = ft_advanced_do-op

SRC = ./src/*.c

HEADER = ./includes/

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(HEADER)
	gcc $(CFLAGS) -o $(NAME) *.o

clean:
	rm -f *.o
	rm -f *~

fclean:
	rm -f $(NAME) *.o

re: fclean all