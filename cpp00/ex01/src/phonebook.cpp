/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 16:26:59 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/05 17:01:41 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "New Phonebook created!" << std::endl;
	nextIndex = 0;
	count = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook has been succesfully destroyed!" << std::endl;
}

std::string	formatColumn(std::string text)
{
	if (text.length() > 10)
		return(text.substr(0,9) + ".");
	return(text);
}
void	PhoneBook::displayPhonebook()
{
	std::cout << std::string(46, '*') << std::endl;
	std::cout << "*";
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << "*" << std::endl;
	for (int i = 0; i < count; i++)
	{
		std::cout << "*";
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << formatColumn(contacts[i].getFirst()) << "|";
		std::cout << std::setw(10) << formatColumn(contacts[i].getLast()) << "|";
		std::cout << std::setw(10) << formatColumn(contacts[i].getNick()) << "|";
		std::cout << "*" << std::endl;
	}
	std::cout << std::string(46, '*') << std::endl;
}
void	PhoneBook::displayContact(int index)
{
	std::cout << "First Name: " << contacts[index].getFirst() << std::endl;
	std::cout << "Last Name: " << contacts[index].getLast() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNick() << std::endl;
	std::cout << "Phone Number: " << contacts[index].getPhone() << std::endl;
	std::cout << "Dark Secret: " << contacts[index].getSecret() << std::endl;
}

int	PhoneBook::search()
{
	std::string	input;

	if (count <= 0)
	{
		std::cout << "No contact has been created!" << std::endl;
		return 0;
	}
	displayPhonebook();
	std::cout << "What index are you choosing?" << std::endl;
	while(true)
	{
		if(!std::getline(std::cin, input))
			return 0;
		if(std::atoi(input.c_str()) - 1 >= 0 && std::atoi(input.c_str()) <= count)
			break;
		std::cout << "Invalid input!" << std::endl;
	}
	displayContact(std::atoi(input.c_str()) - 1);
	return 0;
}

bool	isPrintableString(const std::string& str)
{
	bool	onlySpaces = true;
	for (size_t i = 0; i < str.size(); ++i)
	{
		unsigned char c = static_cast<unsigned char>(str[i]);
		if (!std::isprint(c))
			return false;
		if (!std::isspace(c))
			onlySpaces = false;
	}
	return !onlySpaces;
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

void	PhoneBook::setContacts(std::string &firstName, 
					std::string &lastName, 
					std::string &Nickname, 
					std::string &phoneNumber, 
					std::string &dSecret)
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

void	PhoneBook::debug()
{
	count = 8;
	std::string debug = "DebugLALALA";
	for(int i = 0; i < 8; i++)
	{
		setContacts(debug,debug, debug, debug, debug);
		if (nextIndex < 7)
			nextIndex++;
		else
			nextIndex = 0;
	}
}
