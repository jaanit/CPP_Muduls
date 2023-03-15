# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/07 21:57:13 by rjaanit           #+#    #+#              #
#    Updated: 2023/01/09 03:38:50 by rjaanit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = zombie
CXX      = c++ 
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98

OBJS    =  replace.o main.o
all: $(NAME)
$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
$(OBJS): $(HEAD)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
		rm -f $(NAME)
re: fclean all