#include "../inc/IMateriaSource.hpp"


// Default constructor
IMateriaSource::IMateriaSource(void)
{
	std::cout << GREEN << "IMateriaSource: Default constructor called"
		<< RESET << std::endl;
}


// Copy constructor
IMateriaSource::IMateriaSource(const IMateriaSource &other)
{
	std::cout << YELLOW << "IMateriaSource: Copy constructor called"
		<< RESET << std::endl;
	*this = other;
}


// Copy assignment operator
IMateriaSource &IMateriaSource::operator=(const IMateriaSource &other)
{
	std::cout << YELLOW << "IMateriaSource: Assignment operator called"
		<< RESET << std::endl;

	if (this != &other)
	{
		// Copy members here
	}

	return (*this);
}


// Destructor
IMateriaSource::~IMateriaSource(void)
{
	std::cout << RED << "IMateriaSource: Destructor called"
		<< RESET << std::endl;
}
