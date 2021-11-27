NAME            =		Fixed

CC				=       clang++
CFLAGS          =       -Werror -Wall -Wextra
SRCS            =       main.cpp Fixed.cpp

OBJS            =       $(SRCS:.cpp=.o)

all                     :       $(NAME)

$(NAME)         :       $(OBJS)
							$(CC)  $(CFLAGS) $(OBJS) -o $(NAME)

clean           :
							rm -rf $(OBJS)

fclean			:			clean
							rm $(NAME)

re				:       fclean all%