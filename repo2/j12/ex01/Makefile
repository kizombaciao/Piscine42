NAME = ft_cat

SRC = ./main.c

OBJ = ./*.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc -o $(NAME) $(OBJ)

clean: 
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME) *.o

re: 
	/bin/rm -f $(NAME) *.o  all
