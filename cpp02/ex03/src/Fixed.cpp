/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 17:28:36 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/21 19:29:04 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include <iostream>

// Default constructor
Fixed::Fixed(void) : rawBits(0)
{
}
Fixed::Fixed(const int value)
{
	rawBits = value << fractionalBits;
}
Fixed::Fixed(const float value)
{
	rawBits = roundf(value * (1 << fractionalBits));
}
// Copy constructor
Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

// Assignment operator overload
Fixed &Fixed::operator=(const Fixed &other)
{
    setRawBits(other.getRawBits());
    return (*this);
}

// Destructor
Fixed::~Fixed(void)
{
    return ;
}

int Fixed::getRawBits(void) const
{
	return (rawBits);
}

void Fixed::setRawBits(int const raw)
{
	rawBits = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(rawBits) / (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
	return (rawBits >> fractionalBits);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return(a);
}
Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return(a);
}
const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (b);
	return(a);
}
const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (b);
	return(a);
}
bool	Fixed::operator > (const Fixed &other) const
{
	return(this->rawBits > other.rawBits);
}

bool	Fixed::operator < (const Fixed &other) const
{
	return(this->rawBits < other.rawBits);
}

bool	Fixed::operator >= (const Fixed &other) const
{
	return(this->rawBits >= other.rawBits);
}

bool	Fixed::operator <= (const Fixed &other) const
{
	return(this->rawBits <= other.rawBits);
}

bool	Fixed::operator == (const Fixed &other) const
{
	return(this->rawBits == other.rawBits);
}

bool	Fixed::operator != (const Fixed &other) const
{
	return(this->rawBits != other.rawBits);
}

Fixed	Fixed::operator + (const Fixed &other) const
{
	return (Fixed(toFloat() + other.toFloat()));
}

Fixed	Fixed::operator - (const Fixed &other) const
{
	return (Fixed(toFloat() - other.toFloat()));
}

Fixed	Fixed::operator * (const Fixed &other) const
{
	return (Fixed(toFloat() * other.toFloat()));
}

Fixed	Fixed::operator / (const Fixed &other) const
{
	return (Fixed(toFloat() / other.toFloat()));
}

Fixed &Fixed::operator ++ (void)
{
	rawBits+=1;
	return (*this);
}
Fixed Fixed::operator ++ (int)
{
	Fixed	temp(*this);
	rawBits+=1;
	return temp;
}

Fixed &Fixed::operator -- (void)
{
	rawBits-=1;
	return (*this);
}
Fixed Fixed::operator -- (int)
{
	Fixed	temp(*this);
	rawBits-=1;
	return temp;
}

Fixed Fixed::abs(const Fixed& value)
{
	if (value < Fixed(0))
		return (value * (Fixed(-1)));
	return value;
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return os;
}