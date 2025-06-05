CC = g++
FLAGS = -Werror -Wextra -Wall -std=c++98 -g
SRC = main.cpp
OBJ = $(SRC:.cpp =.o)
NAME = ex04

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.cpo : %.cpp
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -fr $(OBJ)
fclean: clean
	rm -fr $(NAME)
re: fclean all
