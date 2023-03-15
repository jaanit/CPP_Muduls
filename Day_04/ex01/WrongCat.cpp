/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:12:33 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/20 17:32:10 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<<" Creat An WrongCat\n";
    _type= "WrongCat";
}


WrongCat::WrongCat(WrongCat const &WrongCat)
{
    std::cout<<"WrongCat : Copy constructor Called\n";
    *this = WrongCat;
}

WrongCat &WrongCat::operator=(WrongCat const &WrongCat)
{
    this->_type = WrongCat._type;
    return (*this); 
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat : Destructor called\n" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat :  Unknow The Sound!!\n" << std::endl;
}
