NAME = out

CC = clang++

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

HEADERS = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

$(NAME): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: clean all