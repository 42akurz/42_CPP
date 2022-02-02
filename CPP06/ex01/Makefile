NAME = serialization

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC = main.cpp Data.cpp

HEADERS = Data.hpp

$(NAME) : $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all