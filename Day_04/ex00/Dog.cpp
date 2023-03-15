/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:41:07 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/20 18:04:48 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    std::cout<<" Dog1 :Default constructor Called\n";
    _type= "Dog";
}


Dog::Dog(Dog const &Dog)
{
    std::cout<<"Dog2 : Copy constructor Called\n";
    *this = Dog;
}

Dog &Dog::operator=(Dog const &Dog)
{
    this->_type = Dog._type;
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog3 : Destructor called\n" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog4 :  Camera Hoowooowo !!\n" << std::endl;
}