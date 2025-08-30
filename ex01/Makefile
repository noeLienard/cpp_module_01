NAME = Brainzzz

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp zombieHorde.cpp  Zombie.cpp

INCLUDE = Zombie.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(CC) $(CFLAGS) -I$(INCLUDE) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re