NAME = out

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC = main.cpp Bureaucrat.cpp Form.cpp

HEADERS = Bureaucrat.hpp Form.hpp

$(NAME): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: clean all