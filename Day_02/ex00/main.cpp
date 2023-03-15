/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 21:09:59 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/15 20:55:46 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    
    // Fixed fix(10,20);
    // Fixed secfix(1,2);
    // Fixed cfix(1,2);
    // fix = secfix;
    // fix.printa();
    // secfix.printa();

    Fixed a;
    a.setRawBits(21);
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
} 