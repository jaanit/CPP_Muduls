#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("President",5,25)
{
    std::cout << "PresidentialPardonForm : constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &robot):AForm(robot)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm : Distructor called\n";
}
void    PresidentialPardonForm::execute(Bureaucrat const &b)const
{
    if(!this->getIsSgn())
        throw AForm::AFormNotexecute();
    if (b.getGrade() > this->getExeGarde())
        throw AForm::AFormNotexecute();
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" <<  std::endl;

}