/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 11:27:55 by fgameiro          #+#    #+#             */
/*   Updated: 2026/07/31 13:56:04 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& arma)
	: arma(arma), name(name)
{
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << name << " has been destroyed." << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->arma.getType() << std::endl;
}