/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:24:15 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/18 23:10:39 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<< "ScavTrap :Default Constractor Called.. \n" ;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout<<"ScavTrap : Constractor Called.. \n";
    _Name = name;
    _Energy = 50;
    _AtackDamage = 20;
    _Health = 12 ;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap : Distractor Called \n";
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap)
{
    std::cout<<"ScavTrap : Copy Constractor Called.. \n";
    *this = scavtrap ;
}


ScavTrap    &ScavTrap::operator=(ScavTrap const &scavtrap)
{
    _Name = scavtrap._Name;
    _Energy = scavtrap._Energy;
    _Health = scavtrap._Health;
    _AtackDamage = scavtrap._AtackDamage;
    std::cout << "ScavTrap : Copy assignment operator called" << std::endl;
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
    if (_Energy > 0)
    {
        _Energy-=1;
        std::cout <<"ScavTrap " << _Name << " Attacks " << target << " causin " << _AtackDamage << " point of damage! " <<std::endl;
    }
    else{
        std::cout <<"ScavTrap " << _Name  << " can't Attack " << target << std::endl;
    }

}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap : " << _Name << " GuarGate" << std::endl;
}

