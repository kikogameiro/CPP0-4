/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:44:11 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/03 10:40:53 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Default constructor
Dog::Dog() : AAnimal(), brain(new Brain())
{
	type = "Dog";
	std::cout << GREEN
				<< "Dog: Default constructor called"
				<< RESET << std::endl;
}

// Copy constructor
Dog::Dog(const Dog &other) : AAnimal(other), brain(new Brain(*other.brain))
{
	std::cout << YELLOW << "Dog: Copy constructor called" << RESET << std::endl;
}

// Assignment operator overload
Dog &Dog::operator=(const Dog &other)
{
	std::cout << MAGENTA << "Dog: Assignment operator called" << RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

// Destructor
Dog::~Dog(void)
{
	std::cout << RED << "Dog: Destructor called" << RESET << std::endl;
	delete brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << GREEN << "Woof Woof" << RESET << std::endl;
}

void Dog::setIdea(int n, const std::string &idea)
{
	brain->setIdea(n, idea);
}

std::string Dog::getIdea(int n) const
{
	return brain->getIdea(n);
}