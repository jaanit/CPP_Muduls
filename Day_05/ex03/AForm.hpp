#ifndef AFORM_HPP
#define AFORM_HPP

#include<iostream>
#include "Bureaucrat.hpp"
class AForm
{
private:
    std::string const _name;
    bool    _isSgn;
    int const _exeGarde;
    int const _signGrade;

public:
    void    bexecute(Bureaucrat const &b);
    AForm();
    ~AForm();
    AForm(std::string const& _name,int  _exeGarde,int _signGrade);
    AForm(AForm const  &obj);
    AForm &operator=(AForm const  &obj);
    std::string getName() const;
    bool getIsSgn() const;
    int getExeGarde() const;
    int getSignGrade() const;
    virtual void execute(Bureaucrat const & executor) const=0;
    class GradeToExecuteException : public std::exception
    {
        public:
        virtual const char* what() const throw();
    };
    class AFormNotexecute : public std::exception
		{
			public :
				const char* what() const throw();
		};
    void    beSigned(Bureaucrat const &b);
};

std::ostream  &operator<<(std::ostream &output, AForm &op);

#endif 
