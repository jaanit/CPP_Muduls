/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:06:05 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/20 19:40:18 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

#include "animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain	*brain;
public:
    Dog();
    Dog(Dog const &dog);
    ~Dog();
    Dog &operator=(Dog const &dog);
    void makeSound(void) const; 
};

#endif