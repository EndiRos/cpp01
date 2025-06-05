CX = g++
XXFLAG = -Werror -Wextra -Wall -std=c++98 -g
INCLUDE = -I include
SRC= src/Harl.cpp src/main.cpp
OBJ=$(SRC:.cpp=.o)
NAME=ex05

all: $(NAME)

$(NAME): $(OBJ)
	$(CX) $(XXFLAG) $(INCLUDE) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CX) $(XXFLAG) $(INCLUDE) -c $< -o $@

clean:
	rm -fr $(OBJ)

fclean: clean
	rm -fr $(NAME)
	
re: fclean all
