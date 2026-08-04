/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 11:27:59 by fgameiro          #+#    #+#             */
/*   Updated: 2026/07/31 14:13:00 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(const std::string& name)
	: arma(NULL), name(name)
{
}

HumanB::~HumanB()
{
	std::cout << "HumanA " << name << " has been destroyed." << std::endl;
}

void	HumanB::attack()
{
	if (arma)
		std::cout << name << " attacks with their " << arma->getType() << std::endl;
	else
		std::cout << name << " has no weapon." << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	arma = &weapon;
}