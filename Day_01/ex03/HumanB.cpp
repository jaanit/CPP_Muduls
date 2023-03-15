/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:38:37 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/06 22:47:36 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
    _name = str;    
    _Wepean = NULL;
}

void    HumanB::attack()
{
    if (_Wepean)
        std::cout<< this->_name << " attacks with their " << _Wepean->getType()  ;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    _Wepean = &weapon;
}
