/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 15:02:08 by fgameiro          #+#    #+#             */
/*   Updated: 2026/06/25 15:40:02 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEREABLE NOISE *" << std::endl;
		return (0);
	}
	while(argv[j])
	{
		i = 0;
		while(argv[j][i])
		{
			std::cout << (char)toupper(argv[j][i]);
			i++;
		}
		j++;
	}
	std::cout << std::endl;
	return (0);
}