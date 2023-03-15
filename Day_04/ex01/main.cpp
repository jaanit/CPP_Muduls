/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:05:11 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/20 22:39:30 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include "Brain.hpp"

int main()
{
    const Animal *animal[2] ;
        animal[0] = new Cat;
        animal[1] = new Dog;
        animal[0]->makeSound();
        animal[1]->makeSound();
        delete animal[0];
        delete animal[1];

    // delete j;
    // delete i;

    return(0);
}
