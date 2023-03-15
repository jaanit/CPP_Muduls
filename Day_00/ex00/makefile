# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 20:27:02 by rjaanit           #+#    #+#              #
#    Updated: 2023/01/03 20:44:18 by rjaanit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = megaphone
CC      = c++ 
CFLAGS  = -Wall -Wextra -Werror -std=c++98
OBJS    = megaphone.o

all: $(NAME) $(HEAD)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(HEAD)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
		rm -f $(NAME)
re: fclean all