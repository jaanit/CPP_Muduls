# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 01:51:27 by rjaanit           #+#    #+#              #
#    Updated: 2023/01/09 02:11:44 by rjaanit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = zombie
CXX      = c++ 
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98

HEAD    = Zombie.hpp 

OBJS    = Zombie.o main.o ZombieHorde.o

all: $(NAME) $(HEAD)
$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
$(OBJS): $(HEAD)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
		rm -f $(NAME)
re: fclean all