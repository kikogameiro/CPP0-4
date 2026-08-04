/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 20:24:53 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/04 11:09:00 by fgameiro         ###   ########.fr       */
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
int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage : ./harlFitlter <level> " << std::endl;
		return 1;
	}
	Harl harl;
	std::string message_levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = -1;
	for (int j = 0; j < 4; j++)
	{
		if(av[1] == message_levels[j])
			i = j;
	}
	switch (i)
	{
		case 0:
			harl.complain(0);
			break ;
		case 1:
			harl.complain(1);
			break ;
		case 2:
			harl.complain(2);
			break ;
		case 3:
			harl.complain(3);
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return 0;
}
