NAME = megaphone
CC = clang++
CFFAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
