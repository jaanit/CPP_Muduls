/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 20:47:36 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/16 02:08:49 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
};
std::ostream    &operator<<(std::ostream &out, Fixed const &fixed);

#endif


