NAME            =		Fixed

CC				=       clang++
CFLAGS          =       -std=c++98 -Werror -Wall -Wextra
SRCS            =       main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS            =       $(SRCS:.cpp=.o)

all                     :       $(NAME)

$(NAME)         :       $(OBJS)
							$(CC)  $(CFLAGS) $(OBJS) -o $(NAME)

clean           :
							rm -rf $(OBJS)

fclean			:			clean
							rm $(NAME)

re				:       fclean all