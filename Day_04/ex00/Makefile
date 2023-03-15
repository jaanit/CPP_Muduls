# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 18:01:20 by rjaanit           #+#    #+#              #
#    Updated: 2023/01/20 18:03:51 by rjaanit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = Animal
CXX      = c++ 
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98

HEAD    = animal.hpp Cat.hpp Dog.hpp   WrongAnimal.hpp WrongCat.hpp WrongDog.hpp 

OBJS    = main.o animal.o Cat.o Dog.o   WrongAnimal.o WrongCat.o WrongDog.o 

all: $(NAME) $(HEAD)
$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
$(OBJS): $(HEAD)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
		rm -f $(NAME)
re: fclean all