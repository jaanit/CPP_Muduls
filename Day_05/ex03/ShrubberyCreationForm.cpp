#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm():AForm("Shrubbery",137,145)
{
    std::cout << "ShrubberyCreationForm : Constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &Shrubbery):AForm(Shrubbery)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
        std::cout << "ShrubberyCreationForm : Distructor called\n";
}

void    ShrubberyCreationForm::execute(Bureaucrat const &b)const
{
    if(!this->getIsSgn())
        throw AForm::AFormNotexecute();
    if (b.getGrade() > this->getExeGarde())
        throw AForm::AFormNotexecute();
   std::ofstream file((this->getName() + "_shrubbery").c_str());
   file <<"     ### " << std::endl;
    file <<"    #o###  " << std::endl;
    file <<"  #####o### " << std::endl;
    file <<" #o#\\#|#/### " << std::endl;
    file <<"  ###\\|/#o# " << std::endl;
    file <<"   # }|{  # " << std::endl;
    file <<"     }|{ " << std::endl;
	file.close();
}