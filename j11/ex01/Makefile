NAME = aaa

SRC = ./*.c

HEADER = ~/Documents/Git/j11/ex00/

FLAG = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) -I $(HEADER)

clean:
	rm -f *.o

fclean:
	clean rm -f $(NAME)

re:
	fclean all