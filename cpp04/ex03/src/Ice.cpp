#include "../inc/Ice.hpp"


// Default constructor
Ice::Ice(void)
{
	std::cout << GREEN << "Ice: Default constructor called"
		<< RESET << std::endl;
}


// Copy constructor
Ice::Ice(const Ice &other)
{
	std::cout << YELLOW << "Ice: Copy constructor called"
		<< RESET << std::endl;
	*this = other;
}


// Copy assignment operator
Ice &Ice::operator=(const Ice &other)
{
	std::cout << YELLOW << "Ice: Assignment operator called"
		<< RESET << std::endl;

	if (this != &other)
	{
		// Copy members here
	}

	return (*this);
}


// Destructor
Ice::~Ice(void)
{
	std::cout << RED << "Ice: Destructor called"
		<< RESET << std::endl;
}
