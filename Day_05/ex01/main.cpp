/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 23:12:27 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/27 02:50:02 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    
    try
    {
        Bureaucrat b("lagala",120);
        std::cout<<b<<std::endl;
        Form f("reda",160,100);
        b.signForm(f);
    }
    catch(const std::exception& e)
    {
       std::cerr << e.what() << '\n';
    }

}