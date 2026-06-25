/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 16:07:03 by fgameiro          #+#    #+#             */
/*   Updated: 2026/06/25 16:36:33 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contacts
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_dsecret;
public:
	//Constructor
	Contacts();
	Contacts(std::string _first_name, std::string _last_name, std::string _nickname, std::string _phone_number, std::string _secret);
	//Destructor
	~Contacts();
	
	
};

#endif

