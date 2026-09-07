#include "../inc/Character.hpp"


// Default constructor
Character::Character(void)
{
	std::cout << GREEN << "Character: Default constructor called"
		<< RESET << std::endl;
}


// Copy constructor
Character::Character(const Character &other)
{
	std::cout << YELLOW << "Character: Copy constructor called"
		<< RESET << std::endl;
	*this = other;
}


// Copy assignment operator
Character &Character::operator=(const Character &other)
{
	std::cout << YELLOW << "Character: Assignment operator called"
		<< RESET << std::endl;

	if (this != &other)
	{
		// Copy members here
	}

	return (*this);
}


// Destructor
Character::~Character(void)
{
	std::cout << RED << "Character: Destructor called"
		<< RESET << std::endl;
}
