/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:02:08 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/20 18:13:14 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;
public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal &WronAnimal);
    WrongAnimal  &operator=(WrongAnimal const &WronAnimal);
    ~WrongAnimal();
    void    makeSound()const;
    std::string getType(void) const;
};

#endif
