#include "../inc/Cure.hpp"


// Default constructor
Cure::Cure(void)
{
	std::cout << GREEN << "Cure: Default constructor called"
		<< RESET << std::endl;
}


// Copy constructor
Cure::Cure(const Cure &other)
{
	std::cout << YELLOW << "Cure: Copy constructor called"
		<< RESET << std::endl;
	*this = other;
}


// Copy assignment operator
Cure &Cure::operator=(const Cure &other)
{
	std::cout << YELLOW << "Cure: Assignment operator called"
		<< RESET << std::endl;

	if (this != &other)
	{
		// Copy members here
	}

	return (*this);
}


// Destructor
Cure::~Cure(void)
{
	std::cout << RED << "Cure: Destructor called"
		<< RESET << std::endl;
}
