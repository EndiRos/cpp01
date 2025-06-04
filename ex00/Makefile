CC = g++
FLAGS = -Werror -Wextra -Wall -std=c++98
SRC = src/Zombie.cpp src/randomChump.cpp src/newZombie.cpp  src/main.cpp
INCLUDE = -I include
OBJ = $(SRC:.cpp=.o)
NAME = zombie

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -fr $(OBJ)

fclean:
	rm -fr $(OBJ) $(NAME)
re:
	fclean $(NAME)