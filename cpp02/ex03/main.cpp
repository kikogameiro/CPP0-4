/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 19:23:47 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/21 19:43:44 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "inc/Point.hpp"
#include "inc/Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

	std::cout << "Point A : " << a << "\n";
	std::cout << "Point B : " << b << "\n";
	std::cout << "Point C : " << c << "\n";

    // Inside
    Point p1(2, 2);
	std::cout << "Point Inside : " << p1 << "\n";
    // Outside
    Point p2(10, 10);
	std::cout << "Point Outside : " << p2 << "\n";
    // On edge AB
    Point p3(5, 0);
	std::cout << "Point on edge AB : " << p3 << "\n";
    // On edge AC
    Point p4(0, 5);
	std::cout << "Point on edge AC : " << p4 << "\n";
    // On vertex A
    Point p5(0, 0);
	std::cout << "Point on vertex A : " << p5 << "\n";

    std::cout << "Inside:      " << bsp(a, b, c, p1) << std::endl;
    std::cout << "Outside:     " << bsp(a, b, c, p2) << std::endl;
    std::cout << "On edge AB:  " << bsp(a, b, c, p3) << std::endl;
    std::cout << "On edge AC:  " << bsp(a, b, c, p4) << std::endl;
    std::cout << "On vertex A: " << bsp(a, b, c, p5) << std::endl;

    return 0;
}