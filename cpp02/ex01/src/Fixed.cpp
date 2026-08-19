/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 17:28:36 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/18 18:33:54 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

// Default constructor
Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

// Copy constructor
Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
    return ;
}

// Assignment operator overload
Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

// Destructor
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

