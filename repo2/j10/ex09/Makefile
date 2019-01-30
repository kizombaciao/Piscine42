NAME = test

SRC = ./src/*.c

HEADER = ./includes/*.h

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(HEADER)
	gcc -o $(NAME) *.o

clean:
	rm -f *.o
	rm -f *~

fclean:
	rm -f $(NAME)

re:
	clean
	all