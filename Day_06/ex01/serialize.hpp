/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 03:00:16 by rjaanit           #+#    #+#             */
/*   Updated: 2023/02/02 03:36:28 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALISE_HPP
#define SERIALISE_HPP

#include <iostream>
struct Data
{
    std::string _name;
    int _age;
    Data(const std::string &name, const int &age);
};


class Serializer
{
    public:
        int x;

public:
    Serializer(int c);
    uintptr_t serialize(Data *ptr);
    Data *deserialize(uintptr_t raw);
    Serializer();
    ~Serializer();
};




#endif