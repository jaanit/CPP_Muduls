#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("Robot",45,72)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &robot):AForm(robot)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestAForm : Distructor called\n";
}
void    RobotomyRequestForm::execute(Bureaucrat const &b)const
{
    if(!this->getIsSgn())
        throw AForm::AFormNotexecute();
    if (b.getGrade() > this->getExeGarde())
        throw AForm::AFormNotexecute();
    if (rand() % 2)
		std::cout << this->getName() << " has been robotomized" <<  std::endl;
	else
		std::cout << this->getName() << "  robotomy failed" <<  std::endl;
}