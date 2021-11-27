NAME            =		Materia

CC				=       clang++
CFLAGS          =       -Werror -Wall -Wextra -std=c++98
SRCS            =       AMateria.cpp  Character.cpp  Cure.cpp  Ice.cpp  main.cpp  MateriaSource.cpp

OBJS            =       $(SRCS:.cpp=.o)

all                     :       $(NAME)

$(NAME)         :       $(OBJS)
							$(CC)  $(CFLAGS) $(OBJS) -o $(NAME)

clean           :
							rm -rf $(OBJS)

fclean			:			clean
							rm $(NAME)

re				:       fclean all
