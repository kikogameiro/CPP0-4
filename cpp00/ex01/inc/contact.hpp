/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 16:07:03 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/11 10:46:19 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class Contacts
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_dsecret;
public:
	Contacts();
	~Contacts();
	void		setFirst(std::string firstn);
	void		setLast(std::string lastn);
	void		setNick(std::string nick);
	void		setPhone(std::string phone);
	void		setSecret(std::string dsecret);
	std::string	getFirst();
	std::string	getLast();
	std::string	getNick();
	std::string	getPhone();
	std::string	getSecret();
};

#endif

