/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:55:46 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/27 01:07:51 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
Bureaucrat::Bureaucrat()
{
    std::cout<< "Default Constructore Called\n";
}


Bureaucrat::Bureaucrat(Bureaucrat &obj)
{
    std::cout<<"Bureaucrat : Copy Constructor Called\n";
    *this = obj;
}

Bureaucrat::~Bureaucrat()
{
    std::cout<< "Bureaucrat : Distructore Called\n";
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &obj)
{
    _name = obj._name;
    _grade = obj._grade;
    return(*this);
}

std::string Bureaucrat::getName() const
{
    return(_name);
}

int Bureaucrat::getGrade() const
{
    return(_grade);
}

std::ostream &operator<<(std::ostream &output, Bureaucrat &bureaucrat)
{
    output << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return(output);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return("the Grade is too Low \n");
}


const char* Bureaucrat::GradeTooHightException::what() const throw()
{
    return("the Grade is too High\n");
}


Bureaucrat::Bureaucrat(std::string name, int grade) :_name(name),  _grade(grade)
{
     std::cout<< "Bureaucrat Constructore Called\n";
    if (_grade > 150)
        throw GradeTooLowException();
    if (_grade < 1)
        throw GradeTooHightException();
}


void Bureaucrat::signForm(AForm  &f) const
{
    try
    {
        f.beSigned(*this);
        std::cout << this->_name<< " is signed " << f.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr  << this->_name << " didn't signed 'coz "<< e.what() << '\n';
    }
    
}

void Bureaucrat::executeForm(AForm  &f) const
{
    try
    {
        f.bexecute(*this);
        std::cout << this->_name<< " is execute  " << f.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->_name << " didn't exucute 'coz "<< e.what() << '\n';
    }

}
