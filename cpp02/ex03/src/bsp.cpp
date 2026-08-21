/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 19:01:56 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/21 19:25:31 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed t1;
	Fixed t2;
	Fixed t3;
	Fixed bigT;
	
	bigT = Point::area(a, b, c);
	t1 = Point::area(a, b, point);
	t2 = Point::area(a, c, point);
	t3 = Point::area(c, b, point);
	if (t1 == Fixed(0) || t2 == Fixed(0) || t3 == Fixed(0))
		return false;
	return (bigT == (t1 + t2 + t3));
}
