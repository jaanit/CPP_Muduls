/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 23:24:19 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/15 02:37:57 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const       Fixed::_nfractional_bits = 8;

Fixed::Fixed(){
    std::cout<< "Default constructor called \n";
}

Fixed::~Fixed()
{
    std::cout<< "Destructor Called \n";
}

Fixed::Fixed(Fixed const &original)
{
    std::cout<< "Copy Constractor Called \n";
    *this = original;
}
Fixed &Fixed::operator=(const Fixed &original)
{
    std::cout << "copy assignment operator called \n";
    _nbfixed = original._nbfixed;
    return(*this );
}



Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called\n";
 _nbfixed = (value * (1 << Fixed::_nfractional_bits));
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called\n";
    _nbfixed =  value *  (1 << Fixed::_nfractional_bits);
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

float   Fixed::toFloat() const
{
    
    return((float)_nbfixed  / (1 << Fixed::_nfractional_bits));
}

int     Fixed::toInt() const
{
    return(_nbfixed >> Fixed::_nfractional_bits);
}

std::ostream    &operator<<(std::ostream &new_out, Fixed const &fixed)
{
    new_out << fixed.toFloat();
    return (new_out);
}

