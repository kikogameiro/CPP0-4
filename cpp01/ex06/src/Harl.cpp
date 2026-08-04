/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 15:34:21 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/04 11:13:48 by fgameiro         ###   ########.fr       */
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
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "Harl is debugging yoyoyoyo" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "Harl is at the moment informing you that he is informing you" << std::endl;
}
void	Harl::warning( void )
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "Harl is warning you that he is warning you" << std::endl;
}
void	Harl::error( void )
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "Harl has found an error" << std::endl;
}
void	Harl::complain(int j)
{
	void (Harl::*funcs[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = j; i < 4; i++)
	{
			(this->*funcs[i])();
			std::cout << std::endl;
	}
	return ;
}
