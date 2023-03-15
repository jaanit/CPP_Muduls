# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 20:07:29 by rjaanit           #+#    #+#              #
#    Updated: 2023/01/03 20:25:52 by rjaanit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = phonebook
CC      = c++ 
CFLAGS  = -Wall -Wextra -Werror -std=c++98

HEAD    = Phonebook.hpp 

OBJS    = Phonebook.o Contact.o main.o

all: $(NAME) $(HEAD)
$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
$(OBJS): $(HEAD)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
		rm -f $(NAME)
re: fclean all