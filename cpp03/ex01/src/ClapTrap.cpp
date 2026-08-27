/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 09:26:33 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/26 09:26:34 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string _name)
{
	this->name = _name;
	this->hitPoints = initPoints;
	this->energyPoints = initEnergy;
	this->attackDmg = initDmg;
	std::cout << "ClapTrap constructor called" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDmg = other.attackDmg;
}

// Assignment operator overload

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDmg = other.attackDmg;
	}
	return (*this);
}

// Destructor
ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << YELLOW << this->name << RESET << " attacks " << 
		GREEN << target << RESET << " causing " << RED << attackDmg << RESET << " points of damage!\n";
		if (energyPoints == 0)
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has" << GREEN
			<< " NO Energy Points " << RESET << "left!\n";
		else
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has " << GREEN
			<< this->energyPoints << " Energy Points " << RESET << "left!\n";
	}
	else if (hitPoints <= 0)
	{
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has" << RED
			<< " NO Hit Points " << RESET << "left!\n";
	}
	else
	{
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has" << RED
			<< " NO Energy Points " << RESET << "left!\n";
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
		hitPoints -= amount;
	else
	{
		std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has" << RED
			<< " NO Hit Points " << RESET << "left!\n";
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		hitPoints += amount;
		std::cout << "ClapTrap " << YELLOW << this->name << RESET << " repaired " << 
		GREEN << amount << RESET << " hit points!\n" << "Total hit points is: " << RED << hitPoints << RESET << std::endl;
		if (energyPoints == 0)
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has" << GREEN
			<< " NO Energy Points " << RESET << "left!\n";
		else
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has " << GREEN
			<< this->energyPoints << " Energy Points " << RESET << "left!\n";
	}
	else if (hitPoints <= 0)
	{
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has" << RED
			<< " NO Hit Points " << RESET << "left!\n";
	}
	else
	{
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has" << RED
			<< " NO Energy Points " << RESET << "left!\n";
	}
}