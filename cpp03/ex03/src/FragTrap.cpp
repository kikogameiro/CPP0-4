/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 09:26:13 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/26 09:52:11 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

// Default constructor
FragTrap::FragTrap(void)
	: ClapTrap()
{
	hitPoints = 100;
	energyPoints = 100;
	attackDmg = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDmg = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &other)
	: ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

// Assignment operator overload
FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

// Destructor
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}
/* 
void FragTrap::attack(const std::string &target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		std::cout << "FragTrap " << YELLOW << this->name << RESET << " attacks " << 
		GREEN << target << RESET << " causing " << RED << attackDmg << RESET << " points of damage!\n";
		if (energyPoints == 0)
			std::cout << "FragTrap " << YELLOW << this->name << RESET << " has" << GREEN
			<< " NO Energy Points " << RESET << "left!\n";
		else
			std::cout << "FragTrap " << YELLOW << this->name << RESET << " has " << GREEN
			<< this->energyPoints << " Energy Points " << RESET << "left!\n";
	}
	else if (hitPoints <= 0)
	{
			std::cout << "FragTrap " << YELLOW << this->name << RESET << " has" << RED
			<< " NO Hit Points " << RESET << "left!\n";
	}
	else
	{
			std::cout << "Scav " << YELLOW << this->name << RESET << " has" << RED
			<< " NO Energy Points " << RESET << "left!\n";
	}
} */

void	FragTrap::highFivesGuys(void)
{
	std::cout << "You want a " << BLUE << "High Five?\n" << RESET << "You get a high five\n" << CYAN
			<< "BAAAAAAAAM" << RESET << std::endl;
}