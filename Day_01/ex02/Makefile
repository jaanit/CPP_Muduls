# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 11:32:38 by rjaanit           #+#    #+#              #
#    Updated: 2023/01/09 03:38:38 by rjaanit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = zombie
CXX      = c++ 
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98

OBJS    =  main.o

all: $(NAME)
$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
$(OBJS): $(HEAD)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
		rm -f $(NAME)
re: fclean all 