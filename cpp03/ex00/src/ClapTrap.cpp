#include "../inc/ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string _name)
{
	this->name = _name;
	this->hitPoints = initPoints;
	this->energyPoints = initEnergy;
	this->attackDmg = initDmg;
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
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDmg = other.attackDmg;
	return (*this);
}

// Destructor
ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << YELLOW << this->name << RESET << " attacks " << 
		GREEN << target << RESET << " causing " << RED << 10 << RESET << " points of damage!\n";
		if (energyPoints == 0)
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has NO " << GREEN
			<< "Energy Points " << RESET << "left!";
		else
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has " << GREEN
			<< this->energyPoints << " Energy Points " << RESET << "left!\n";
	}
	else if (hitPoints <= 0)
	{
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has NO " << RED
			<< "Hit Points " << RESET << "left!";
	}
	else
	{
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has NO " << RED
			<< "Energy Points " << RESET << "left!";
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has NO " << RED
			<< "Hit Points " << RESET << "left!";
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		hitPoints += amount;
		std::cout << "ClapTrap " << YELLOW << this->name << RESET << " repaired " << 
		GREEN << amount << RESET << " hit points!\n" << "Total hit points is: " << RED << hitPoints << std::endl;
		if (energyPoints == 0)
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has NO " << GREEN
			<< "Energy Points " << RESET << "left!";
		else
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has " << GREEN
			<< this->energyPoints << " Energy Points " << RESET << "left!";
	}
	else if (hitPoints <= 0)
	{
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has NO " << RED
			<< "Hit Points " << RESET << "left!";
	}
	else
	{
			std::cout << "ClapTrap " << YELLOW << this->name << RESET << " has NO " << RED
			<< "Energy Points " << RESET << "left!";
	}
}