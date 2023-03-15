/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:07:28 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/09 03:46:18 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"
// #include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :  _Wepean(weapon), _name(name)
{    
}

void    HumanA::attack()
{
    std::cout<< this->_name << " attacks with their "  << _Wepean.getType() << '\n' ;
}
