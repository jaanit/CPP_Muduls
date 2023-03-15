/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:55:46 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/27 02:44:42 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout<< "Default Constructore Called\n";
}


Bureaucrat::Bureaucrat(Bureaucrat &obj)
{
    std::cout<<"Copy Constructor Called\n";
    *this = obj;
}

Bureaucrat::~Bureaucrat()
{
    std::cout<< "Distructore Called\n";
}

std::string Bureaucrat::getName()
{
    return(_name);
}

int Bureaucrat::getGrade()
{
    return(_grade);
}

void    Bureaucrat::setName(std::string name)
{
    _name = name;
}

void    Bureaucrat::setGrade(int grade)
{
    _grade = grade;
}

std::ostream &operator<<(std::ostream &output, Bureaucrat &bureaucrat)
{
    output << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return(output);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return("the grade is too Low ");
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &b)
{
    std::cout << "Bureaucrat  : Copy assignment operator called" << std::endl;
    _grade = b._grade ;
    _name = b._name;
   return(*this);
}

const char* Bureaucrat::GradeTooHightException::what() const throw()
{
    return("the grade is too High");
}

Bureaucrat::Bureaucrat(std::string name, int grade) :_name(name),  _grade(grade)
{
     std::cout<< "Bureaucrat Constructore Called\n";
    if (_grade > 150)
        throw GradeTooLowException();
    if (_grade < 1)
        throw GradeTooHightException(); 
}