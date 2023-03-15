/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:08:10 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/20 19:09:13 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<" Cat :Default constructor Called\n";
    _type= "Cat";
}


Cat::Cat(Cat const &Cat)
{
    std::cout<<"Cat : Copy constructor Called\n";
    *this = Cat;
}

Cat &Cat::operator=(Cat const &Cat)
{
    this->_type = Cat._type;
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat : Destructor called\n" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat : Maooooo!!\n" << std::endl;
}
