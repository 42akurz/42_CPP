NAME = out

CC = clang++

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

HEADERS = Animal.hpp Cat.hpp Dog.hpp Brain.hpp

$(NAME): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: clean all