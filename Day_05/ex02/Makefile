NAME    = bureaucrat
CXX      = c++ 
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98

HEAD    =  Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp \
			RobotomyRequestForm.hpp ShrubberyCreationForm.hpp

OBJS    = main.o Bureaucrat.o AForm.o PresidentialPardonForm.o \
			RobotomyRequestForm.o ShrubberyCreationForm.o

all: $(NAME) $(HEAD)
$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
$(OBJS): $(HEAD)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
		rm -f $(NAME)
re: fclean all