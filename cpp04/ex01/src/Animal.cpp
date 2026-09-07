/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 15:03:58 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/03 10:25:47 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

// Default constructor
Animal::Animal(void)
{
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal: Type constructor called!";
}

// Copy constructor
Animal::Animal(const Animal &other)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = other;
}

// Assignment operator overload
Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal: Assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Destructor
Animal::~Animal(void)
{
	std::cout << "Animal: Destructor called" << std::endl;
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
