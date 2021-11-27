NAME            =		Convert

CC				=       clang++
CFLAGS          =       -std=C++98 -Werror -Wall -Wextra
SRCS            =       main.cpp Convert.cpp

OBJS            =       $(SRCS:.cpp=.o)

all                     :       $(NAME)

$(NAME)         :       $(OBJS)
							$(CC)  $(CFLAGS) $(OBJS) -o $(NAME)

clean           :
							rm -rf $(OBJS)

fclean			:			clean
							rm $(NAME)

re				:       fclean all
