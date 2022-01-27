NAME = out

CC = clang++

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

HEADERS = ClapTrap.hpp ScavTrap.hpp

$(NAME): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: clean all