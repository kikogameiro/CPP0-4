/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 15:03:58 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/08 10:21:15 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

// Default constructor
Animal::Animal(void) : type("Animal")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal Type constructor called!";
}

// Copy constructor
Animal::Animal(const Animal &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

// Assignment operator overload
Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
		*this = other;
	return (*this);
}

// Destructor
Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return(type);
}

void	Animal::makeSound( void ) const
{
	std::cout << GREEN << "(Animal sounds)" << RESET << std::endl;
}
