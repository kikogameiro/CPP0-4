/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 18:55:37 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/21 19:41:14 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"
#include <iostream>

// Default constructor
Point::Point(void)
	: x(0), y(0)
{
}

Point::Point(const float a, const float b)
	: x(a), y(b)
{
}

// Copy constructor
Point::Point(const Point& other)
	: x(other.x), y(other.y)
{
}

// Assignment operator overload
Point &Point::operator=(const Point &other)
{
	setPoint(other.getPointX(), other.getPointY());
	return (*this);
}

// Destructor
Point::~Point(void)
{
}

void	Point::setPoint(Fixed a, Fixed b)
{
	x = a;
	y = b;
}
Fixed	Point::getPointX(void) const
{
	return(x);
}
Fixed	Point::getPointY(void) const
{
	return(y);
}

Fixed Point::area(const Point& a, const Point& b, const Point& c)
{
	Fixed result;

	result = (a.x * (b.y - c.y)
			+ b.x * (c.y - a.y)
			+ c.x * (a.y - b.y)) / Fixed(2);

	return Fixed::abs(result);
}

std::ostream& operator<<(std::ostream& out, const Point& point)
{
	out << "("
		<< point.getPointX()
		<< ", "
		<< point.getPointY()
		<< ")";

	return out;
}
