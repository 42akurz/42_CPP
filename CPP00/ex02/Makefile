NAME = phoneBook
CC = clang++
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = tests.cpp Account.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(SRC)	
	$(CC) -o $(NAME) $(SRC)

all: $(NAME)

clean:	
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
