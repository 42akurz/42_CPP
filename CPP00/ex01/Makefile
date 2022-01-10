NAME = phoneBook
CC = clang++
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = main.cpp phoneBook.cpp contact.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(SRC)	
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

all: $(NAME)

clean:	
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
