#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm: public  AForm
{
private:
    int _grade;
    int sign;
    
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const &target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm &scf);
    void execute(Bureaucrat const & executor) const;
};

#endif