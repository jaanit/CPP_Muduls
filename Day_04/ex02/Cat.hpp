/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:05:27 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/20 19:40:42 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP

#include "animal.hpp"
#include "Brain.hpp"
class Cat: public Animal
{
private:
	Brain	*brain;
public:
    Cat(Cat const &cat);
    Cat();
    ~Cat();
    Cat &operator=(Cat const &cat);
    void    makeSound() const;
};

#endif