/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 23:24:19 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/15 21:01:00 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
const int Fixed::FractionBits = 8;
Fixed::Fixed(){
    std::cout<< "Default Constructor Called \n";
    this->_nbfixed = 0;
}

Fixed::~Fixed()
{
    std::cout<< "Destructor Called \n";
}

Fixed::Fixed(const Fixed &original)
{
    *this = original;
    std::cout<< "Copy Constractor Called \n";
}
Fixed &Fixed::operator=(const Fixed &original)
{
    std::cout << "copy assignment operator called \n";
    _nbfixed = original.getRawBits();
    return(*this );
}

int     Fixed::getRawBits()const
{
    std::cout << "getRawBits member function called \n";
    return(_nbfixed);
}

void       Fixed::setRawBits(int const raw)
{
    _nbfixed = raw;
}

