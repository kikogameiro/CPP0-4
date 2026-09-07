/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 15:03:58 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/03 10:39:09 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

// Default constructor
AAnimal::AAnimal(void)
{
	std::cout << "AAnimal: Default constructor called" << std::endl;
}

// Destructor
AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal: Destructor called" << std::endl;
	return ;
}