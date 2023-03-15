/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:21:14 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/02 17:59:12 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::get_firstname() const
{
	return (_firstname);
}

std::string	Contact::get_lastname() const
{
	return (_lastname);
}

std::string	Contact::get_nickname() const
{
	return (_nickname);
}

std::string	Contact::get_secret() const
{
	return (_secret);
}

std::string	Contact::get_phone_number() const
{
	return (_phone_number);
}

void		Contact::set_firstname(std::string firstname)
{
	_firstname = firstname;
}

void		Contact::set_lastname(std::string lastname)
{
	_lastname = lastname;
}

void		Contact::set_nickname(std::string nickname)
{
	_nickname = nickname;
}

void		Contact::set_secret(std::string secret)
{
	_secret = secret;
}

void		Contact::set_phone_number(std::string phone_number)
{
	_phone_number = phone_number;
}