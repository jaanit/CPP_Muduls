/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 20:00:19 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/09 01:45:35 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>  
#include <algorithm> 
#include <iostream>
#include <stdio.h>

class zombie
{
private:
    std::string _name;
public:
    ~zombie(void);
    zombie();
    zombie(std::string name);
    void    announce( void );
};

zombie* newZombie( std::string name );
void    randomChump( std::string name );
#endif
