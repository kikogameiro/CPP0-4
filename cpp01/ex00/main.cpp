/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:38:39 by fgameiro          #+#    #+#             */
/*   Updated: 2026/07/29 17:06:35 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

int main()
{
    Zombie  Zombie1("Kiko1");
    Zombie* Zombie2 = newZombie("Kiko2");
    Zombie1.announce();
    Zombie2->announce();
    randomChump("Kiko3");
    delete Zombie2;
}