/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 01:04:16 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/09 02:09:25 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    {
        Zombie *zmbi;
        zmbi = zombieHorde(-1,"lagala");
        if (!zmbi)
        {
            std::cerr << "Bad allocation\n";
            return 1;
        }
        delete [] zmbi;
    }
}