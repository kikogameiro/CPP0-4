/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:17:56 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/26 14:10:10 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

// Constructor
DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDmg = FragTrap::attackDmg;

	std::cout << "DiamondTrap constructor called" << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(DiamondTrap const & other)
	: ClapTrap(other.name + "_clap_name"),
		FragTrap(other.name + "_clap_name"),
		ScavTrap(other.name + "_clap_name")
{
	*this = other;

	std::cout << "DiamondTrap " << GREEN << other.name
			<< RESET << " was copied" << std::endl;
}

// Assignment operator overload
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->name = other.name;
	}
	return (*this);
}

// Destructor
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

// Who am I?
void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << GREEN
				<< this->name << RESET << std::endl;
	std::cout << "ClapTrap name: " << BLUE
				<< ClapTrap::name << RESET << std::endl;
}