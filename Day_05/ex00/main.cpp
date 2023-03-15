/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 23:12:27 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/27 02:26:20 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    
    try
    {
        Bureaucrat bureau("lagala",1313);

        std::cout<<bureau<<std::endl;
    }
    catch(const std::exception& e)
    {
       std:: cerr << e.what() << '\n';
    }
}