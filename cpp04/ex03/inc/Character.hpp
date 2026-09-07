#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "Colors.h"
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character
{
	private:
		std::string	name;
		AMateria* slot[4];
	public:
		Character(void);
		Character(const Character &other);
		Character &operator=(const Character &other);
		~Character(void);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
