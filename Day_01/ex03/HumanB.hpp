/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:27:05 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/06 22:46:37 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream> 
#include "Weapon.hpp"
class HumanB
{
private:
    Weapon *_Wepean;
    std::string _name;
public:
    HumanB(std::string str);
    void    setWeapon(Weapon &weapon);
    void    attack(void);
};
#endif