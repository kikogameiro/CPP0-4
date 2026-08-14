/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:53:10 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/12 18:14:20 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

const int Fixed::_fractional_bits = 8;

// Default constructor
Fixed::Fixed(void) : _fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

// Copy constructor
Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// Assignment operator overload
Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Assignment operator called" << std::endl;
    setRawBits(other.getRawBits());
    return (*this);
}

// Destructor
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called!" << std::endl;
	return (_fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	_fixed_point = raw;
}