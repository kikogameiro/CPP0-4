/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:44:13 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/03 10:11:16 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// Default constructor
Cat::Cat() : Animal(), brain(new Brain())
{
	type = "Cat";
	std::cout << GREEN
				<< "Cat: Default constructor called"
				<< RESET << std::endl;
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << YELLOW << "Cat: Copy constructor called" << RESET << std::endl;
}

// Assignment operator overload
Cat &Cat::operator=(const Cat &other)
{
	std::cout << MAGENTA << "Cat: Assignment operator called" << RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

// Destructor
Cat::~Cat(void)
{
	std::cout << RED << "Cat: Destructor called" << RESET << std::endl;
	delete brain;
}

void	Cat::makeSound( void ) const
{
	std::cout << GREEN << "Miau Miau" << RESET << std::endl;
}

void Cat::setIdea(int n, const std::string &idea)
{
	brain->setIdea(n, idea);
}

std::string Cat::getIdea(int n) const
{
	return brain->getIdea(n);
}