#include "../inc/AMateria.hpp"


// Default constructor
AMateria::AMateria(void)
{
	std::cout << GREEN << "AMateria: Default constructor called"
		<< RESET << std::endl;
}


// Copy constructor
AMateria::AMateria(const AMateria &other)
{
	std::cout << YELLOW << "AMateria: Copy constructor called"
		<< RESET << std::endl;
	*this = other;
}


// Copy assignment operator
AMateria &AMateria::operator=(const AMateria &other)
{
	std::cout << YELLOW << "AMateria: Assignment operator called"
		<< RESET << std::endl;

	if (this != &other)
	{
		// Copy members here
	}

	return (*this);
}


// Destructor
AMateria::~AMateria(void)
{
	std::cout << RED << "AMateria: Destructor called"
		<< RESET << std::endl;
}
