NAME = zombie

CC = clang++

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

all: $(NAME)

clean: \

fclean: clean
	$(RM) $(NAME)

re: fclean all