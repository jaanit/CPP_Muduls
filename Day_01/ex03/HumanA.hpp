/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:30:40 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/06 22:52:43 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream> 
#include "Weapon.hpp"
class HumanA
{
private:
    Weapon &_Wepean;
    std::string _name;
public:
    HumanA(std::string name,Weapon &weapon );
    void    attack(void);
};
#endif