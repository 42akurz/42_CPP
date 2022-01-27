NAME = out

CC = clang++

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

HEADERS = AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp

$(NAME): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: clean all