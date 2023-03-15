/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:55:46 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/27 02:49:49 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
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
    std::cout<< "Distructore Called\n";
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &obj)
{
    std::cout << "Bureaucrat  : Copy assignment operator called" << std::endl;
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
    return("the Grade is too Low ");
}


const char* Bureaucrat::GradeTooHightException::what() const throw()
{
    return("the Grade is too High");
}


Bureaucrat::Bureaucrat(std::string name, int grade) :_name(name),  _grade(grade)
{
     std::cout<< "Bureaucrat Constructore Called\n";
    if (_grade > 150)
        throw GradeTooLowException();
    if (_grade < 1)
        throw GradeTooHightException();
}



void Bureaucrat::signForm(Form  &f) const
{
    try
    {
        f.beSigned(*this);
        std::cout << f.getName() << "is signed by " << this->_name << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "didn't signed 'coz "<< e.what() << '\n';
    }
    
}