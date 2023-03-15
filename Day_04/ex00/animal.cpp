/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:10:01 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/20 16:37:37 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal()
{
    std::cout<<" Animal :Default constructor Called\n";
}

Animal::Animal(std::string type)
{
    _type = type;
    std::cout<<"Animal : Constructor Called\n";
}

Animal::Animal(Animal &animal)
{
    std::cout<<"Animal : Copy constructor Called\n";
    *this = animal;
}

Animal &Animal::operator=(Animal const &animal)
{
    this->_type = animal._type;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal : Destructor called\n" << std::endl;
}

void Animal::makeSound(void)const
{
    std::cout << "Animal : the Sound Not Specifed\n" << std::endl;
}

std::string Animal::getType(void)const
{
    return (this->_type);
}
