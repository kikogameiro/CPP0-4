/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 17:27:48 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/21 17:59:14 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Fixed.hpp"
#include <iostream>

int main(void)
{
	std::cout << "=== 1. Construction & assignment (carried over from ex00/ex01) ===\n";
	Fixed a;                  // default constructor
	Fixed b(10);               // int constructor
	Fixed c(5.5f);              // float constructor
	Fixed d(b);                 // copy constructor
	Fixed e;
	e = c;                        // copy assignment
	std::cout << "a=" << a << " b=" << b << " c=" << c
				<< " d=" << d << " e=" << e << "\n\n";

	std::cout << "=== 2. Comparison operators ===\n";
	std::cout << "b > c   : " << (b > c) << "\n";
	std::cout << "b < c   : " << (b < c) << "\n";
	std::cout << "b >= b  : " << (b >= b) << "\n";
	std::cout << "b <= c  : " << (b <= c) << "\n";
	std::cout << "b == d  : " << (b == d) << "\n";
	std::cout << "b != c  : " << (b != c) << "\n\n";

	std::cout << "=== 3. Arithmetic operators ===\n";
	std::cout << "b + c   : " << (b + c) << "\n";
	std::cout << "b - c   : " << (b - c) << "\n";
	std::cout << "b * c   : " << (b * c) << "\n";
	std::cout << "b / c   : " << (b / c) << "\n\n";

	std::cout << "=== 4. Pre/post increment & decrement ===\n";
	Fixed f(1.0f);
	std::cout << "f starts at        : " << f << "\n";
	std::cout << "++f  (pre, changes then returns) : " << ++f << "\n";
	std::cout << "f is now            : " << f << "\n";
	std::cout << "f++  (post, returns OLD value)    : " << f++ << "\n";
	std::cout << "f is now            : " << f << "\n";
	std::cout << "--f  (pre)                        : " << --f << "\n";
	std::cout << "f--  (post, returns OLD value)     : " << f-- << "\n";
	std::cout << "f is now                           : " << f << "\n\n";

	Fixed g(3.14f);
	Fixed h(2.71f);
	std::cout << "=== 5. Static min / max (both overloads) ===\n";
	std::cout << "g=" << g << " h=" << h << "\n\n";
	const Fixed cg(9.9f);
	const Fixed ch(1.1f);

	std::cout << "min(g, h)   : " << Fixed::min(g, h) << "\n";
	std::cout << "max(g, h)   : " << Fixed::max(g, h) << "\n";
	std::cout << "min(cg, ch) : " << Fixed::min(cg, ch) << "\n";
	std::cout << "max(cg, ch) : " << Fixed::max(cg, ch) << "\n";

	return (0);
}