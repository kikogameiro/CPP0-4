/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:44:11 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/08 10:22:01 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Default constructor
Dog::Dog(void)
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->Animal::type = "Dog";
}

// Copy constructor
Dog::Dog(const Dog &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->type = other.type;
}

// Assignment operator overload
Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Destructor
Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	return ;
}

void	Dog::makeSound( void ) const
{
	std::cout << GREEN << "Woof Woof" << RESET << std::endl;
}
