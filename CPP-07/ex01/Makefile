SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CPPflags = -Wall -Wextra -Werror -std=c++98

NAME = start

%.o : %.cpp
	c++ $(CPPflags) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ) iter.hpp
	c++ $(CPPflags) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all