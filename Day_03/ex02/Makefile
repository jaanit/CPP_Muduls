# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 23:57:56 by rjaanit           #+#    #+#              #
#    Updated: 2023/01/19 00:02:24 by rjaanit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = FragTrap
CXX      = c++ 
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98

HEAD    = ScavTrap.hpp ClapTrap.hpp FragTrap.hpp

OBJS    = main.o ClapTrap.o ScavTrap.o FragTrap.o


all: $(NAME) $(HEAD)
$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
$(OBJS): $(HEAD)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
		rm -f $(NAME)
re: fclean all