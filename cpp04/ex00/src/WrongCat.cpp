/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:44:13 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/08 10:16:38 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

// Default constructor
WrongCat::WrongCat(void)
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	type = "WrongCat";
}

// Copy constructor
WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->type = other.type;
}

// Assignment operator overload
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Destructor
WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
	return ;
}

void		WrongCat::makeSound() const
{
	std::cout << GREEN << "Wrong Miau Miau" << RESET << std::endl;
}