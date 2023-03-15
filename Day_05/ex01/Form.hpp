#ifndef FORM_HPP
#define FORM_HPP

#include<iostream>
#include "Bureaucrat.hpp"
class Form
{
private:
    std::string const _name;
    bool    _isSgn;
    int const _exeGarde;
    int const _signGrade;

public:
    Form();
    ~Form();
    Form(std::string const& _name,int  _exeGarde,int _signGrade);
    Form(Form const  &obj);
    Form &operator=(Form const  &obj);
    std::string getName() const;
    std::string getIsSgn() const;
    std::string getExeGarde() const;
    std::string getSignGrade() const;
    class GradeTooLowException : public std::exception
    {
        public:
        virtual const char* what() const throw();
    };
    void    beSigned(Bureaucrat const &b);
};

std::ostream  &operator<<(std::ostream &output, Form &op);

#endif 
