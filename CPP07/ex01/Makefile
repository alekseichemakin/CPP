NAME            =               iter

CC                              =       clang++
CFLAGS          =       -std=c++98 -Werror -Wall -Wextra
SRCS            =       main.cpp

OBJS            =       $(SRCS:.cpp=.o)

all                     :       $(NAME)

$(NAME)         :       $(OBJS)
						$(CC)  $(CFLAGS) $(OBJS) -o $(NAME)

clean           :
						rm -rf $(OBJS)

fclean          :		clean
						rm $(NAME)

re				:       fclean all
