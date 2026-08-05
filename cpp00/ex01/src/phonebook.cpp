/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 16:26:59 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/04 16:50:31 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "New Phonebook created!" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook has been succesfully destroyed!" << std::endl;
}

int	isPrintableString(std::string	str)
{
	for(int	i = 0; i < (int)str.length(); i++)
	{
		if(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			return 0;
	}
	return 1;
}

int askField(const std::string &message, std::string &result)
{
	while (true)
	{
		std::cout << message;
		if (!std::getline(std::cin, result))
			return 0;
		if (!result.empty() && isPrintableString(result))
			return 1;
		std::cout << "Invalid input. Try again." << std::endl;
	}
}

void	PhoneBook::setContacts(std::string	firstName, 
					std::string lastName, 
					std::string Nickname, 
					std::string phoneNumber, 
					std::string dSecret)
{
	contacts[nextIndex].setFirst(firstName);
	contacts[nextIndex].setLast(lastName);
	contacts[nextIndex].setNick(Nickname);
	contacts[nextIndex].setPhone(phoneNumber);
	contacts[nextIndex].setSecret(dSecret);
}
int	PhoneBook::addContact()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nick;
	std::string	phone;
	std::string	dsecret;

	if (!askField("First name: ", firstName))
		return 1;
	if (!askField("Last Name: ", lastName))
		return 1;
	if (!askField("Nickname: ", nick))
		return 1;
	if (!askField("Phone Number: ", phone))
		return 1;
	if (!askField("Dark secret: ", dsecret))
		return 1;
	setContacts(firstName, lastName, nick, phone, dsecret);
	if (nextIndex < 7)
		nextIndex++;
	else
		nextIndex = 0;
	if (count < 8)
		count++;
	return 0;
}
