/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 15:34:21 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/03 20:41:37 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl is warming up" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl is leaving now" << std::endl;
}

void	Harl::debug( void )
{
	std::cout << "Harl is debugging yoyoyoyo" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "Harl is at the moment informing you that he is informing you" << std::endl;
}
void	Harl::warning( void )
{
	std::cout << "Harl is warning you that he is warning you" << std::endl;
}
void	Harl::error( void )
{
	std::cout << "Harl has found an error" << std::endl;
}
void	Harl::complain(std::string level)
{
	std::string message_levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcs[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == message_levels[i])
		{
			(this->*funcs[i])();
			return ;
		}
	}
	std::cout << "Harl doesn't know what to do :(" << std::endl;
	return ;
}
