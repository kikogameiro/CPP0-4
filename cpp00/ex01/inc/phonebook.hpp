/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 16:06:50 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/19 11:57:21 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class PhoneBook
{
private:
	Contacts	contacts[8];
	int			count;
	int			nextIndex;
	void	displayPhonebook();
	void	displayContact(int index);
	void	setContacts(std::string &firstName, 
					std::string &lastName, 
					std::string &Nickname, 
					std::string &phoneNumber, 
					std::string &dSecret);
public:
	PhoneBook();
	~PhoneBook();
	int		addContact();
	int		search();
	void	debug();
};

#endif