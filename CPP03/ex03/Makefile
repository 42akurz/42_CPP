NAME = out

CC = clang++

CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow

RM = rm -f

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

$(NAME): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: clean all