/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 11:33:32 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/26 09:15:38 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"
#include "inc/ScavTrap.hpp"

int	main(void)
{
	ScavTrap Jorge("Jorge");
	
	Jorge.attack("Bruno");
	Jorge.takeDamage(9);
	Jorge.beRepaired(1);
	Jorge.takeDamage(2);
	Jorge.beRepaired(1);
	Jorge.guardGate();
	Jorge.guardGate();
	Jorge.guardGate();
	Jorge.guardGate();
}