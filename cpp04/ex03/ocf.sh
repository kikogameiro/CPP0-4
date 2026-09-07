#!/bin/bash

# ============================================================
# 42 C++ Class Generator
#
# Usage:
#   ./generate.sh Class1 Class2 Class3
#
# Example:
#   ./generate.sh ClapTrap ScavTrap FragTrap
# ============================================================

hppPath="inc/"
cppPath="src/"

mkdir -p "$hppPath" "$cppPath"


# ============================================================
# Create Colors.h
# ============================================================

create_colors()
{
	local Colors="$hppPath/Colors.h"

	cat > "$Colors" << EOL
#ifndef COLORS
# define COLORS

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

#endif
EOL
}


# ============================================================
# Create .hpp
# ============================================================

create_hpp()
{
	local class="$1"
	local capClass="$2"
	local fcapClass="$3"
	local hpp="$4"

	cat > "$hpp" << EOL
#ifndef ${fcapClass}_HPP
# define ${fcapClass}_HPP

# include <iostream>
# include "Colors.h"

class $capClass
{
	private:

	public:
		$capClass(void);
		$capClass(const $capClass &other);
		$capClass &operator=(const $capClass &other);
		~$capClass(void);
};

#endif
EOL
}


# ============================================================
# Create .cpp
# ============================================================

create_cpp()
{
	local class="$1"
	local capClass="$2"
	local cpp="$3"

	cat > "$cpp" << EOL
#include "../inc/$capClass.hpp"


// Default constructor
$capClass::$capClass(void)
{
	std::cout << GREEN << "$capClass: Default constructor called"
		<< RESET << std::endl;
}


// Copy constructor
$capClass::$capClass(const $capClass &other)
{
	std::cout << YELLOW << "$capClass: Copy constructor called"
		<< RESET << std::endl;
	*this = other;
}


// Copy assignment operator
$capClass &$capClass::operator=(const $capClass &other)
{
	std::cout << YELLOW << "$capClass: Assignment operator called"
		<< RESET << std::endl;

	if (this != &other)
	{
		// Copy members here
	}

	return (*this);
}


// Destructor
$capClass::~$capClass(void)
{
	std::cout << RED << "$capClass: Destructor called"
		<< RESET << std::endl;
}
EOL
}


# ============================================================
# Main
# ============================================================

create_colors

for class in "$@"
do
	# First letter uppercase
	capClass="$(tr '[:lower:]' '[:upper:]' <<< "${class:0:1}")${class:1}"

	# Entire class name uppercase
	fcapClass="$(tr '[:lower:]' '[:upper:]' <<< "$class")"

	hpp="$hppPath$capClass.hpp"
	cpp="$cppPath$capClass.cpp"

	create_hpp "$class" "$capClass" "$fcapClass" "$hpp"
	create_cpp "$class" "$capClass" "$cpp"
done


# ============================================================
# Output
# ============================================================

printf "\n$# classes created:\n\n"

for class in "$@"
do
	capClass="$(tr '[:lower:]' '[:upper:]' <<< "${class:0:1}")${class:1}"
	echo "  $capClass.hpp"
	echo "  $capClass.cpp"
done

echo "  colors.h"
echo
