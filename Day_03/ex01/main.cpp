/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:43:02 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/18 23:55:45 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

int main()
{
    
    ClapTrap r("r");
    ScavTrap lagala("lagala");
    
    r.attack("reda");
    r.takeDamage(12);
    lagala.guardGate();
    // reda.attack("lagala");
    // reda.beRepaired(10);
    // lagala.beRepaired(10);
    return(0);
}