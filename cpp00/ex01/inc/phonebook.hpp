/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 16:06:50 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/05 16:00:57 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class PhoneBook
{
private:
	Contacts	contacts[8];
	int			count;
	int			nextIndex;
public:
	PhoneBook();
	~PhoneBook();
	int		addContact();
	int		search();
	void	setContacts(std::string &firstName, 
					std::string &lastName, 
					std::string &Nickname, 
					std::string &phoneNumber, 
					std::string &dSecret);
	void	displayPhonebook();
	void	displayContact(int index);
	void	debug();
};

#endif