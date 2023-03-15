/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:49:10 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/07 16:44:29 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

class Sed
{
	private:
		std::ifstream	_inFile;
		std::ofstream	_outFile;
		
	public:
		Sed(std::string fileName);
		void replace(std::string s1, std::string s2);
};
#endif