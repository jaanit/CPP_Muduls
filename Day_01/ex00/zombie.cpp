/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 20:00:16 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/09 03:29:05 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"zombie.hpp"


zombie::zombie(std::string name) : _name(name){}

zombie* newZombie(std::string name)
{   
    zombie* zmb = new (std::nothrow) zombie(name);
    return(zmb);
}

zombie::~zombie(void)
{
	std::cout << _name << " was destroyed" << std::endl;
}

void       zombie::announce(void)
{
    std::cout<< _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

