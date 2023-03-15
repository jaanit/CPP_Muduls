# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 23:57:56 by rjaanit           #+#    #+#              #
#    Updated: 2023/01/18 10:51:22 by rjaanit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = claptarp
CXX      = c++ 
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98

HEAD    = ClapTrap.hpp

OBJS    = main.o ClapTrap.o

all: $(NAME) $(HEAD)
$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
$(OBJS): $(HEAD)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
		rm -f $(NAME)
re: fclean all