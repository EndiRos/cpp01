CX = g++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98 -g
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = ex04

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.cpo : %.cpp
	$(CX) $(FLAGS) -c $< -o $@
clean:
	rm -fr $(OBJ)
fclean: clean
	rm -fr $(NAME)
re: fclean all
