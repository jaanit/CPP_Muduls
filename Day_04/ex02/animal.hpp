/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:24:39 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/20 23:06:49 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(std::string type);
    Animal(Animal &animal);
    Animal  &operator=(Animal const &animal);
    virtual ~Animal();
    virtual void    makeSound()const = 0;
    std::string getType(void) const;
};

#endif