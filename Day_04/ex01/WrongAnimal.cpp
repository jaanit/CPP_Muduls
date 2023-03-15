/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimalnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:02:14 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/20 17:02:44 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<< "Creat an WrongAnimal\n";
}

WrongAnimal::WrongAnimal(std::string type)
{
    _type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal &WrongAnimal)
{
    *this = WrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &WrongAnimal)
{
    this->_type = WrongAnimal._type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << " Destructor WrongAnimal\n" << std::endl;
}

void WrongAnimal::makeSound(void)const
{
    std::cout << "Unkown sound\n" << std::endl;
}

std::string WrongAnimal::getType(void)const
{
    return (this->_type);
}
