/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:44:31 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/27 02:28:18 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat 
{
private:
    std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name,int grade);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat &obj);
    std::string getName();
    int getGrade();
    void    setGrade(int grade);
    void    setName(std::string name);
    Bureaucrat &operator=(Bureaucrat &b);
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
};
std::ostream  &operator<<(std::ostream &output, Bureaucrat &op);

#endif