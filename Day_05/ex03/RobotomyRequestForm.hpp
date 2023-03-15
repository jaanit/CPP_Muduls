#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm: public  AForm
{
private:
    int _grade;
    int _sign;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(RobotomyRequestForm &robot);
    ~RobotomyRequestForm();
    void execute(Bureaucrat const & executor) const;
};



#endif