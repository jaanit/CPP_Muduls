# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 18:01:20 by rjaanit           #+#    #+#              #
#    Updated: 2023/01/20 23:48:45 by rjaanit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = A_Animal
CXX      = c++ 
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98

HEAD    = animal.hpp Cat.hpp Dog.hpp  Brain.hpp

OBJS    = main.o animal.o Cat.o Dog.o   Brain.o

all: $(NAME) $(HEAD)
$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
$(OBJS): $(HEAD)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
		rm -f $(NAME)
re: fclean all