#ifndef POINT_HPP
# define POINT_HPP
# include <iostream>
# include "Fixed.hpp"

class Point
{
	private:
		const Fixed	x;
		const Fixed	y;
	public:
		Point(void);
		Point(const float a, const float b);
		Point(const Point& other);
		Point &operator=(const Point &other);
		~Point();
		void	setPoint(Fixed a, Fixed b);
		Fixed	getPointX(void) const;
		Fixed	getPointY(void) const;
		static Fixed	area(const Point& a, const Point& b, const Point& c);
};

std::ostream& operator<<(std::ostream& out, const Point& point);

#endif

