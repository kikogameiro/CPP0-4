/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:44:13 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/08 10:20:04 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// Default constructor
Cat::Cat(void)
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->Animal::type = "Cat";
}

// Copy constructor
Cat::Cat(const Cat &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->type = other.type;
}

// Assignment operator overload
Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Destructor
Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}

void	Cat::makeSound( void ) const
{
	std::cout << GREEN << "Miau Miau" << RESET << std::endl;
}
