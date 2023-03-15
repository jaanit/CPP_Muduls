#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
class RobotomyRequestForm;
class ShrubberyCreationForm;
class PresidentialPardonForm;
class Intern
{

public:
    Intern();
    ~Intern();
    AForm    *makeForm(std::string const &formName, std::string const &target);
    class InvalidFormName : public std::exception
    {
        public:
        const char* what() const throw();
    };
};

#endif