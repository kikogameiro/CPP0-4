#include "../inc/MateriaSource.hpp"


// Default constructor
MateriaSource::MateriaSource(void)
{
	std::cout << GREEN << "MateriaSource: Default constructor called"
		<< RESET << std::endl;
}


// Copy constructor
MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout << YELLOW << "MateriaSource: Copy constructor called"
		<< RESET << std::endl;
	*this = other;
}


// Copy assignment operator
MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << YELLOW << "MateriaSource: Assignment operator called"
		<< RESET << std::endl;

	if (this != &other)
	{
		// Copy members here
	}
	return (*this);
}


// Destructor
MateriaSource::~MateriaSource(void)
{
	std::cout << RED << "MateriaSource: Destructor called"
		<< RESET << std::endl;
}
