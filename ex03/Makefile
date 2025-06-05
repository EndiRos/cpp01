CC = g++
FLAGS = -Wextra -Werror -Wall -std=c++98 -pedantic
SRC = src/main.cpp src/Weapon.cpp src/HumanA.cpp src/HumanB.cpp
INCLUDE = -I include 
NAME = ex02
OBJ = $(SRC:.cpp=.o)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

%.o : %.cpp 
	$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -fr src/*.o 

fclean : clean
	rm -fr $(NAME)
re: fclean all