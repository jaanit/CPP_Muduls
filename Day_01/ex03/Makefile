# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/07 00:52:42 by rjaanit           #+#    #+#              #
#    Updated: 2023/01/09 03:47:19 by rjaanit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = human
CXX      = c++ 
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98

OBJS    =  HumanA.o HumanB.o Weapon.o main.o
all: $(NAME)
$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
$(OBJS): $(HEAD)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
		rm -f $(NAME)
re: fclean all