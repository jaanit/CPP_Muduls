/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 20:47:36 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/16 03:10:22 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int     _nbfixed;
    static const int _nfractional_bits;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &original);
    Fixed& operator = (const Fixed &original);
    int getRawBits()const;
    void setRawBits( int const raw );

    Fixed(const int value);
    Fixed(const float value);
    float   toFloat(void) const;
    int     toInt(void) const;

    //add
    
    Fixed operator+(Fixed const &Fixed);
    Fixed operator-(Fixed const &Fixed);
    Fixed operator/(Fixed const &Fixed);
    Fixed operator*(Fixed const &Fixed);
    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);
    bool operator<(Fixed const &fixed)const ;
    bool operator>(Fixed const &fixed)const ;
    bool operator<=(Fixed const &fixed);
    bool operator>=(Fixed const &fixed);
    bool operator!=(Fixed const &fixed);
    bool operator==(Fixed const &fixed);
    static Fixed &min(Fixed &ref1, Fixed &ref2);
    static Fixed  const &min(Fixed const &ref1, Fixed const &ref2);
    static Fixed &max(Fixed &ref1, Fixed &ref2);
    static Fixed const &max(Fixed const &ref1, Fixed const &ref2);
};
std::ostream    &operator<<(std::ostream &out, Fixed const &fixed);

#endif


