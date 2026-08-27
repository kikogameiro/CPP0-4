#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal& other);
		Animal &operator=(const Animal &other);
		~Animal();
		std::string	getType(void);
		void		setType(std::string type);
};

#endif

