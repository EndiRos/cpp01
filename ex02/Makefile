CC = g++
FLAGS = -Werror -Wextra -Wall -std=c++98
SRC = main.cpp
NAME = ex02
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)

	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp

	$(CC) $(FLAGS) -c $< -o $@

clean:

	rm -fr $(OBJ)

fclean: clean

	rm -fr $(NAME)

re: fclean all