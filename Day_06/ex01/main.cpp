/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 03:00:02 by rjaanit           #+#    #+#             */
/*   Updated: 2023/02/02 03:36:07 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main ()
{
    Serializer sr;
    uintptr_t ptr;
    Data data("lagala",100);
    ptr  = sr.serialize(&data);
    Data *d = sr.deserialize(ptr);
    std::cout<<d->_name << "-"<< d->_age<<std::endl;
}