#include "AForm.hpp"

AForm::AForm():_name("UKNOWN"),_isSgn(0),_exeGarde(150),_signGrade(10)
{
    std::cout<<"AForm : Default Constructor Called\n";
}

AForm::AForm(std::string const& _name,int  _exeGarde,int _signGrade):_name(_name),_isSgn(false),_exeGarde( _exeGarde),_signGrade(_signGrade)
{
    std::cout<<"AForm :Constructor Called\n";
}

AForm::AForm(AForm const &AForm):_name(AForm._name),_isSgn(AForm._isSgn),_exeGarde( AForm._exeGarde),_signGrade(AForm._signGrade){
     std::cout<<"AForm : Copy Constructor Called\n";
}

AForm &AForm::operator=(AForm const  &obj)
{   
    std::cout << "AForm  : Copy assignment operator called" << std::endl;
    _isSgn = obj._isSgn;
    return(*this);
}

AForm::~AForm()
{
    std::cout<<"AForm : Distructor Called\n";
}

void    AForm::beSigned(Bureaucrat const &b)
{
    if (b.getGrade() > this->_signGrade)
        throw AForm::GradeToExecuteException();
    this->_isSgn = 1;
}

void    AForm::bexecute(Bureaucrat const &b)
{
    if (b.getGrade() > this->_exeGarde || !(this->getIsSgn()))
        throw AForm::GradeToExecuteException();
}

std::string AForm::getName() const
{
    return(_name);
}

const char* AForm::GradeToExecuteException::what() const throw()
{
    return(  "the grade is too looow \n");
}

const char* AForm::AFormNotexecute::what() const throw()
{
    return(  "AForm Not execute coz the grade is too low or not signe \n");
}


 int AForm::getExeGarde() const
 {
    return(_exeGarde);
 }

 int AForm::getSignGrade() const
 {
    return(_signGrade);
 }

 bool AForm::getIsSgn() const
 {
    return(_isSgn);
 }