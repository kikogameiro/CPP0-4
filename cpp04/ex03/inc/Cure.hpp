#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "Colors.h"

class Cure
{
	private:
		std::string	type;
	public:
		Cure(void);
		Cure(const Cure &other);
		Cure &operator=(const Cure &other);
		~Cure(void);
};

#endif
