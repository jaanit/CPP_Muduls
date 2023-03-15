/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:12:58 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/09 02:08:04 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    zombie *zmbi;
    zmbi = newZombie("test");
    if(!zmbi)
        return (1);
    zmbi->announce();
    delete zmbi;
    randomChump("TEST");
}