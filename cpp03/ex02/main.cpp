/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 11:33:32 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/26 09:52:37 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"
#include "inc/ScavTrap.hpp"
#include "inc/FragTrap.hpp"

int	main(void)
{
	FragTrap Jorge("Jorge");
	ScavTrap Andre("Andre");
	
	Jorge.takeDamage(9);
	Jorge.beRepaired(1);
	Andre.guardGate();
	Andre.guardGate();
	Andre.attack("Jorge");
	Jorge.highFivesGuys();
}