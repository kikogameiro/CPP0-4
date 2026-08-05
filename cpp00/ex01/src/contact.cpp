/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 16:26:54 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/04 15:50:53 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/contact.hpp"

Contacts::Contacts()
{
	
}

Contacts::~Contacts()
{
	
}

void		Contacts::setFirst(std::string firstn)
{
	this->_first_name = firstn;
}

void		Contacts::setLast(std::string lastn)
{
	this->_last_name = lastn;
}

void		Contacts::setNick(std::string nick)
{
	this->_nickname = nick;
}

void		Contacts::setPhone(std::string phone)
{
	this->_phone_number = phone;
}

void		Contacts::setSecret(std::string dsecret)
{
	this ->_dsecret = dsecret;
}

std::string	Contacts::getFirst()
{
	return(this->_first_name);
}

std::string	Contacts::getLast()
{
	return(this->_last_name);
}

std::string	Contacts::getNick()
{
	return(this->_nickname);
}

std::string	Contacts::getPhone()
{
	return(this->_phone_number);
}

std::string	Contacts::getSecret()
{
	return(this->_dsecret);
}