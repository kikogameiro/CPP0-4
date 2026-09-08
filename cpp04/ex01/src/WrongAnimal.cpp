/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 15:03:58 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/08 10:26:02 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "Wrong Animal:Type constructor called!";
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

// Assignment operator overload
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
		*this = other;
	return (*this);
}

// Destructor
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return(type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << GREEN << "(WrongAnimal sounds)" << RESET << std::endl;
}
