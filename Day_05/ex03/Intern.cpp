#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
    std::cout << "Intern : default Constaructor called\n";
}

Intern::~Intern()
{
    std::cout << "Intern : Distaructor called\n";
}

const char* Intern::InvalidFormName::what() const throw()
{
    return("InvalidFormName\n");
}

AForm	*Intern::makeForm(std::string const &formName, std::string const &target)
{
    (void)target;
    const std::string arrForm[3] = {
                            "robotomy request",
                            "shrubbery request",
                            "presidential request"
                            };
    size_t i = 0;
    for (; i < 3;i++)
        if (arrForm[i] == formName)
            break;
    switch (i)
    {
    case 0:
        return (new RobotomyRequestForm());
    case 1:
        return (new ShrubberyCreationForm());
    case 2:
        return (new PresidentialPardonForm());
    default:
        throw InvalidFormName();
    }
}

