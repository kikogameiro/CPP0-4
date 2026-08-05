/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 16:26:52 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/04 16:29:10 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/phonebook.hpp"

int	main(void)
{
	std::string	input;
	PhoneBook	pb;
	while(true)
	{
		std::cout << "Enter command: ADD/SEARCH/EXIT" << std::endl;
		if (!(std::getline(std::cin, input)))
			return (1);
		if (input == "ADD")
		{
			if(pb.addContact())
				return 2;
		}
/* 		if (input == "SEARCH")
			pb.search(); */
		if (input == "EXIT")
			break ;
	}
	return (0);
}