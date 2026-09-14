NAME = animal
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp
INC = Animal.hpp Cat.hpp Dog.hpp

all: $(NAME)

$(NAME): $(SRC) $(INC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re