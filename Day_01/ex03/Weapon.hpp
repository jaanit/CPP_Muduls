/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:02:34 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/07 00:37:48 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>  

class Weapon
{
private:
   std::string _type ;
   
public:
    Weapon(std::string s);
    std::string getType(void);
    void    setType(std::string str);
};
#endif