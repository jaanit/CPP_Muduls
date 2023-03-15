NAME    = iter
CXX      = c++ 
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98

HEAD    =  iter.hpp

OBJS    = main.o

all: $(NAME) $(HEAD)
$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
$(OBJS): $(HEAD)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
		rm -f $(NAME)
re: fclean all