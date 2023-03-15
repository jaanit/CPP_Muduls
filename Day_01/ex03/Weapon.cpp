/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:05:26 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/06 21:31:22 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    _type = str;
}

std::string Weapon::getType()
{
    return(_type); 
}

void Weapon::setType(std::string s)
{
   _type = s;
}