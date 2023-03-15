/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:14:06 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/07 21:50:18 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include "replace.hpp"
int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout<< "Invalid Arguments : \n" ;
        return(0);
    }
    Sed replece(av[1]);
    replece.replace(av[2], av[3]);
    
}