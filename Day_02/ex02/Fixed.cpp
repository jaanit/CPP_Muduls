/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 23:24:19 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/16 16:45:12 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const       Fixed::_nfractional_bits = 8;

Fixed::Fixed(){
    _nbfixed = 0;
    // std::cout<< "Default constructor called \n";
}

Fixed::~Fixed()
{
    // std::cout<< "Destructor Called \n";
}

Fixed::Fixed(Fixed const &original)
{
    // std::cout<< "Copy Constractor Called \n";
    *this = original;
}
Fixed &Fixed::operator=(const Fixed &original)
{
    // std::cout << "copy assignment operator called \n";
    _nbfixed = original._nbfixed;
    return(*this );
}



Fixed::Fixed(const int value)
{
    // std::cout << "Int constructor called\n";
    _nbfixed = (value * (1 << Fixed::_nfractional_bits));
}

Fixed::Fixed(const float value)
{
    
    // std::cout << "Float constructor called\n";
    _nbfixed =  roundf(value *  (1 << Fixed::_nfractional_bits));
}

int     Fixed::getRawBits()const
{
    // std::cout << "getRawBits member function called \n";
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

// add

Fixed   Fixed::operator+(Fixed const &fixed)
{
    return (Fixed((_nbfixed + fixed._nbfixed) / (float)(1 << _nfractional_bits)));
}

Fixed   Fixed::operator-(Fixed const &fixed)
{
    return (Fixed((_nbfixed - fixed._nbfixed) / (float)(1 << _nfractional_bits)));
}

Fixed   Fixed::operator/(Fixed const &fixed)
{
    return (Fixed((_nbfixed / (float)(1 << _nfractional_bits)) / (fixed._nbfixed/ (float)(1 << _nfractional_bits))));
}

Fixed   Fixed::operator*(Fixed const &fixed)
{
    return (Fixed((_nbfixed / (float)(1 << _nfractional_bits)) * (fixed._nbfixed/ (float)(1 << _nfractional_bits))));
}

Fixed   Fixed::operator++(void)
{
    _nbfixed++;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed   tmp = *this;
    _nbfixed++;
    return (tmp);
}

Fixed   Fixed::operator--(void)
{
    _nbfixed--;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed   tmp = *this;

    _nbfixed--;
    return (tmp);
}

bool   Fixed::operator<(Fixed const &fixed)const
{
    return (_nbfixed < fixed._nbfixed);
}

bool   Fixed::operator>(Fixed const &fixed)const
{
    return (_nbfixed> fixed._nbfixed);
}

std::ostream    &operator<<(std::ostream &new_out, Fixed const &fixed)
{
    new_out << fixed.toFloat();
    return (new_out);
}

bool   Fixed::operator<=(Fixed const &fixed) 
{
    return (_nbfixed < fixed._nbfixed || _nbfixed == fixed._nbfixed);
}

bool   Fixed::operator>=(Fixed const &fixed) 
{
    return (_nbfixed > fixed._nbfixed || _nbfixed == fixed._nbfixed);
}

bool   Fixed::operator==(Fixed const &fixed)
{
    return (_nbfixed == fixed._nbfixed);
}

bool   Fixed::operator!=(Fixed const &fixed)
{
    return (_nbfixed != fixed._nbfixed);
}

Fixed &Fixed::min(Fixed &ref1, Fixed &ref2)
{
    if (ref1<ref2)
        return(ref1);
    return(ref2);
}
Fixed const &Fixed::min(Fixed const &ref1, Fixed const &ref2)
{
    if (ref1<ref2)
        return(ref1);
    return(ref2);
}

Fixed const &Fixed::max(Fixed const &ref1, Fixed const &ref2)
{
    if (ref1._nbfixed >ref2._nbfixed)
        return(ref1);
    return(ref2);
}

Fixed &Fixed::max(Fixed &ref1, Fixed &ref2)
{
    if (ref1>ref2)
        return(ref1);
    return(ref2);
}