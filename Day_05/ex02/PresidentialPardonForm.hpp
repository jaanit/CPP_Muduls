#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
class PresidentialPardonForm: public  AForm
{
private:
    int _grade;
    int sign;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(PresidentialPardonForm &pre);
    ~PresidentialPardonForm();
    void    execute(Bureaucrat const & executor)const;
};

#endif 