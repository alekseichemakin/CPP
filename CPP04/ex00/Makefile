NAME            =		Animal

CC				=       clang++
CFLAGS          =       -Werror -Wall -Wextra -std=c++98
SRCS            =       main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrangCat.cpp

OBJS            =       $(SRCS:.cpp=.o)

all                     :       $(NAME)

$(NAME)         :       $(OBJS)
							$(CC)  $(CFLAGS) $(OBJS) -o $(NAME)

clean           :
							rm -rf $(OBJS)

fclean			:			clean
							rm $(NAME)

re				:       fclean all
