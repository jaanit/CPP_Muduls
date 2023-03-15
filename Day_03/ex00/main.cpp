/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:43:02 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/18 23:18:34 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main()
{
    ClapTrap r;
    ClapTrap lagala("lagala");
    ClapTrap reda(lagala);
    lagala.attack("reda");
    reda.takeDamage(12);
    // reda.attack("lagala");
    // reda.beRepaired(10);
    // lagala.beRepaired(10);
    return(0);
}