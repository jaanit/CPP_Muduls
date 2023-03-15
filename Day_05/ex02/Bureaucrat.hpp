/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:44:31 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/27 01:05:32 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
class AForm;
class RobotomyRequestForm;
class Bureaucrat 
{
private:
    std::string _name;
    int _grade;
public:
    void executeForm(AForm   &f) const;
    Bureaucrat();
    Bureaucrat(std::string name,int grade);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat &obj);
    Bureaucrat &operator=(Bureaucrat &obj);
    std::string getName()const;
    int getGrade() const;
    void    setGrade(int grade);
    void    setName(std::string name);
    
    class GradeTooLowException : public std::exception
    {
        public:
        virtual const char* what() const throw();
    };
    class GradeTooHightException : public std::exception
    {
        public:
        virtual const char* what() const throw();
    };
    void signForm(AForm &f)const;
};
std::ostream  &operator<<(std::ostream &output, Bureaucrat &op);

#endif