NAME = templates

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

HEADERS = whatever.hpp

RM = rm -f

$(NAME) : $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all