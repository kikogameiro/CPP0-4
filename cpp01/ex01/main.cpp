/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:20:01 by fgameiro          #+#    #+#             */
/*   Updated: 2026/07/29 18:03:58 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

int main()
{
    int i = 5;
    Zombie* horde = zombieHorde(i, "Kiko");
    for(int j = 0; j < i; j++)
        horde[j].announce();
    delete[] horde;
}