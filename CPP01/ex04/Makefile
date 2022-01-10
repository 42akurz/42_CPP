NAME = replace

CC = clang++

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = main.cpp Replacer.cpp

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean: \

fclean: clean
	$(RM) $(NAME)

re: fclean all