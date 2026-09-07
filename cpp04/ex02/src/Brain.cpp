/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 09:59:24 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/03 10:03:42 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

// Default constructor
Brain::Brain(void)
{
	std::cout << CYAN
		<< "Brain: Default constructor called"
		<< RESET << std::endl;
}

// Copy constructor
Brain::Brain(const Brain &other)
{
	std::cout << YELLOW
		<< "Brain: Copy constructor called"
		<< RESET << std::endl;
	*this = other;
}

// Copy assignment operator
Brain &Brain::operator=(const Brain &other)
{
	std::cout << MAGENTA
		<< "Brain: Assignment operator called"
		<< RESET << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}

	return (*this);
}

// Destructor
Brain::~Brain(void)
{
	std::cout << RED
		<< "Brain: Destructor called"
		<< RESET << std::endl;
}

const std::string &Brain::getIdea(int n) const
{
	return (ideas[n]);
}

void Brain::setIdea(int n, const std::string &idea)
{
	ideas[n] = idea;
}

