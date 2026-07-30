/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:13:23 by fgameiro          #+#    #+#             */
/*   Updated: 2026/07/29 17:56:34 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* horde_of_Zombies = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        horde_of_Zombies[i].setName(name);
        std::cout << "Zombie " << i+1 << " created!" << std::endl;
    }
    return(horde_of_Zombies);
}