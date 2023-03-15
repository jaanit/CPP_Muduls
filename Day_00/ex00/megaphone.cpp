/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:54:33 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/05 15:54:56 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm> 
#include <iostream>
#include <stdio.h>
int main(int ac, char **av)
{
    int j;
    if(ac == 1)
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"  ;
    else
    {
        for (int i = 1; i < ac ;i++)
        {
             j = 0;
            while(av[i][j])
            {
               std:: cout << (char)toupper(av[i][j]);
               j++;
            }
        }
    }
    std :: cout << "\n";
    return 0;
}