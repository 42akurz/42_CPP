NAME = out

CC = clang++

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = main.cpp Fixed.cpp Point.cpp bsp.cpp

HEAD = Fixed.hpp

$(NAME): $(SRC) $(HEAD)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean: \

fclean: clean
	$(RM) $(NAME)

re: fclean all