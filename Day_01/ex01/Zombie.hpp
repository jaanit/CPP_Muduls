/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:21:32 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/09 01:09:51 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>


class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    Zombie(std::string);
    void    announce(void);
    void    setIn(std::string name);

};
Zombie* zombieHorde( int N, std::string name );

#endif