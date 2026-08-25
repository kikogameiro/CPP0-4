#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

class ClapTrap
{
	private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDmg;
		static int unsigned const	initPoints = 10;
		static int unsigned const	initEnergy = 10;
		static int unsigned const	initDmg = 10;
	public:
		ClapTrap(void);
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap& other);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif

