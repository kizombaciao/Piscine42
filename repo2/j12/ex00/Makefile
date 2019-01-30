NAME = ft_display_file

SRC = ./main.c

OBJ = ./*.o

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc $(FLAG) -o $(NAME) $(OBJ)

clean:
	rm -f *.o
fclean:
	rm -f $(NAME) *.o
re: fclean all