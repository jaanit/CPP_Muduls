/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 02:18:07 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/06 18:19:33 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm> 
#include <iostream>
#include <stdio.h>

int main()
{
    std::string str = "HI THIS IS BRAIN" ;
    std::string* ptr = &str;
    std::string &ref = str;
    
    std::cout<< &str << std::endl ;
    std::cout<< ptr << std::endl;
    std::cout<< &ref << std::endl;
    std::cout<<"\n";
    std::cout<< str << std::endl ;
    std::cout<< *ptr << std::endl;
    std::cout<< ref << std::endl;
}