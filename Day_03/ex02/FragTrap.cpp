/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:18:17 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/18 23:45:26 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout<< "FragTrap :Default Constractor Called.. \n" ;
}

FragTrap::FragTrap(std::string name):ClapTrap()
{
    std::cout<<"FragTrap : Constractor Called.. \n";
    _Name = name;
    _Energy = 50;
    _AtackDamage = 20;
    _Health = 12 ;
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrapp : Distractor Called \n";
}

FragTrap    &FragTrap::operator=(FragTrap const &FragTrap)
{
    _Name = FragTrap._Name;
    _Energy = FragTrap._Energy;
    _Health = FragTrap._Health;
    _AtackDamage = FragTrap._AtackDamage;
    std::cout << "FragTrap : Copy assignment operator called" << std::endl;
    return (*this);
}

void    FragTrap ::attack(const std::string& target)
{
    if (_Energy > 0)
    {
        _Energy-=1;
        std::cout <<"FragTrap : " << _Name << " Attacks " << target << " causin " << _AtackDamage << " point of damage! " <<std::endl;
    }
    else{
        std::cout <<"FragTrap :" << _Name  << " can't Attack " << target << std::endl;
    }

}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap : " << getName() << " high fives !!" << std::endl;
}

