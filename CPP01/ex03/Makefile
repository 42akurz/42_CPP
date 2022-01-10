NAME = weapons

CC = clang++

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean: \

fclean: clean
	$(RM) $(NAME)

re: fclean all