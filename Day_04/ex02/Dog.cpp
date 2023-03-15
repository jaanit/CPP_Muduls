/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:41:07 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/20 20:44:26 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    std::cout<<" Dog :Default constructor Called\n";
    _type= "Dog";
    brain = new(Brain);
}


Dog::Dog(Dog const &dog)
{
    *this = dog;
}

Dog &Dog::operator=(Dog const &Dog)
{
    _type = Dog._type;
    brain = new Brain(*Dog.brain);
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog : Destructor called\n" << std::endl;
    delete brain ;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog :  Hoowooowo !!\n" << std::endl;
}