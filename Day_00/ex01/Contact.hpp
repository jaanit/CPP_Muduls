/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:45:44 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/02 17:58:21 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>  
#include <algorithm> 
#include <iostream>
#include <stdio.h>

class Contact {
private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_secret;
	std::string	_phone_number;
public:
	std::string	get_firstname(void) const;
	std::string	get_lastname(void) const;
	std::string	get_nickname(void) const;
	std::string	get_secret(void) const;
	std::string	get_phone_number(void) const;
	void				set_firstname(std::string firstname);
	void				set_lastname(std::string lastname);
	void				set_nickname(std::string nickname);
	void				set_secret(std::string secret);
	void				set_phone_number(std::string number);
};

#endif 