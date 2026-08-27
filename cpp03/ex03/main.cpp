/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 11:33:32 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/26 12:11:07 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/DiamondTrap.hpp"

int	main(void)
{
	std::cout << "\n========== CONSTRUCTOR TEST ==========\n" << std::endl;

	DiamondTrap	d1("Bob");

	std::cout << "\n========== WHO AM I TEST ==========\n" << std::endl;

	d1.whoAmI();

	std::cout << "\n========== ATTACK TEST ==========\n" << std::endl;

	d1.attack("Enemy");

	std::cout << "\n========== DAMAGE TEST ==========\n" << std::endl;

	d1.takeDamage(20);
	d1.beRepaired(10);

	std::cout << "\n========== COPY CONSTRUCTOR TEST ==========\n" << std::endl;

	DiamondTrap	d2(d1);

	d2.whoAmI();
	d2.attack("Another Enemy");

	std::cout << "\n========== ASSIGNMENT OPERATOR TEST ==========\n" << std::endl;

	DiamondTrap	d3("Alice");

	std::cout << "\nBefore assignment:" << std::endl;
	d3.whoAmI();

	std::cout << "\nAssigning d1 to d3...\n" << std::endl;

	d3 = d1;

	std::cout << "\nAfter assignment:" << std::endl;
	d3.whoAmI();

	std::cout << "\n========== MORE ATTACKS ==========\n" << std::endl;

	d1.attack("Enemy 1");
	d2.attack("Enemy 2");
	d3.attack("Enemy 3");

	std::cout << "\n========== END OF MAIN ==========\n" << std::endl;

	return (0);
}