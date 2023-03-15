/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 23:12:27 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/27 01:13:46 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{
    // Form *t = new  ShrubberyCreationForm();
    try
    {
        
        Bureaucrat b("lagala",10);
        ShrubberyCreationForm sh;
        // RobotomyRequestForm robot;
        // PresidentialPardonForm pre;
        // b.signForm(robot);
        // b.executeForm(robot);
        // robot.execute(b);
        b.signForm(sh);
        b.executeForm(sh);
        sh.execute(b);
        // b.signForm(pre);
        // b.executeForm(pre);
        
        
    }
    catch(const std::exception& e)
    {
       std::cerr << e.what() << '\n';
    }

}