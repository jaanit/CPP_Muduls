/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 01:06:46 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/09 02:10:29 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *Zmb = new(std::nothrow) Zombie[N];
    if (!Zmb)
        return NULL;
    for (int i = 0; i< N; i++)
        Zmb[i].setIn(name);
    Zmb->announce();
    return(Zmb);
}
 