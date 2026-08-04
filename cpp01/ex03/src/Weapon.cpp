/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 11:27:57 by fgameiro          #+#    #+#             */
/*   Updated: 2026/07/31 12:09:06 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon()
{
    
}

Weapon::Weapon(std::string  type)
{
    this->type = type;
}

Weapon::~Weapon()
{
    std::cout << "Weapon " << type << " has been destroyed." << std::endl;
}

const	std::string&  Weapon::getType() const
{
    return type;
}

void    Weapon::setType(std::string newWeapon)
{
    this->type = newWeapon;
}