/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 20:24:53 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/03 20:42:46 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Harl.hpp"

/* int	main(void)
{
	Harl harl;
	std::string	complaint;
	std::cout << "Cool mode activated! What will Harl complain about?" << std::endl;
	while(complaint != "QUIT")
	{
		if (complaint != "QUIT")
		{
			std::cin >> complaint;
			harl.complain(complaint);
		}
	}
	return 0;
} */
int	main(void)
{
	Harl harl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("lalalalal");
}
