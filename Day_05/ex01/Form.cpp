#include "Form.hpp"

Form::Form():_name("UKNOWN"),_isSgn(0),_exeGarde(150),_signGrade(10)
{
    std::cout<<"Form : Default Constructor Called\n";
}

Form::Form(std::string const& _name,int  _exeGarde,int _signGrade):_name(_name),_isSgn(false),_exeGarde( _exeGarde),_signGrade(_signGrade)
{
    std::cout<<"Form :Constructor Called\n";
}

Form::Form(Form const &form):_name(form._name),_isSgn(form._isSgn),_exeGarde( form._exeGarde),_signGrade(form._signGrade){
     std::cout<<"Form : Copy Constructor Called\n";
}

Form &Form::operator=(Form const  &form)
{
    _isSgn = form._isSgn;
    std::cout << "Form  : Copy assignment operator called" << std::endl;
    return(*this);
}

Form::~Form()
{
    std::cout<<"Form : Distructor Called\n";
}

void    Form::beSigned(Bureaucrat const &b)
{
    if (b.getGrade() > this->_signGrade)
        throw Form::GradeTooLowException();
    this->_isSgn = 1;
}

std::string Form::getName() const
{
    return(_name);
}

const char* Form::GradeTooLowException::what() const throw()
{
    return("the grade is too looow Grade");
}
