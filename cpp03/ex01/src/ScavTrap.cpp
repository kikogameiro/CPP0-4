/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 09:26:29 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/26 09:26:30 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap(void)
	: ClapTrap()
{
	hitPoints = 100;
	energyPoints = 50;
	attackDmg = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDmg = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other)
	: ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

// Assignment operator overload
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

// Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

void ScavTrap::attack(const std::string &target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		std::cout << "ScavTrap " << YELLOW << this->name << RESET << " attacks " << 
		GREEN << target << RESET << " causing " << RED << attackDmg << RESET << " points of damage!\n";
		if (energyPoints == 0)
			std::cout << "ScavTrap " << YELLOW << this->name << RESET << " has" << GREEN
			<< " NO Energy Points " << RESET << "left!\n";
		else
			std::cout << "ScavTrap " << YELLOW << this->name << RESET << " has " << GREEN
			<< this->energyPoints << " Energy Points " << RESET << "left!\n";
	}
	else if (hitPoints <= 0)
	{
			std::cout << "ScavTrap " << YELLOW << this->name << RESET << " has" << RED
			<< " NO Hit Points " << RESET << "left!\n";
	}
	else
	{
			std::cout << "Scav " << YELLOW << this->name << RESET << " has" << RED
			<< " NO Energy Points " << RESET << "left!\n";
	}
}

void	ScavTrap::guardGate(void)
{
	if (GuardGate != 0)
	{
		std::cout << "ScavTrap " << YELLOW << name << RESET << " is guarding the gate!\n";
		GuardGate = 0;
	}
	else
	{
		std::cout << "ScavTrap " << YELLOW << name << RESET << " is no longer guarding the gate!\n";
		GuardGate = 1;
	}
}