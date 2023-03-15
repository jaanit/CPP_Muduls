# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefille                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 00:05:49 by rjaanit           #+#    #+#              #
#    Updated: 2023/01/09 00:12:22 by rjaanit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = harl
CC      = c++ 
CFLAGS  = -Wall -Wextra -Werror -std=c++98
HEAD = Harl.hpp
OBJS    = Harl.o  main.o

all: $(NAME)
$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
$(OBJS): $(HEAD)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
		rm -f $(NAME)
re: fclean all 