#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int rawBits;
		static const int fractionalBits = 8;
	public:
//constructors
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		~Fixed();
		Fixed	&operator=(const Fixed &other);
//Member functions
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
//Comparison operators
		bool	operator > (const Fixed &other) const;
		bool	operator < (const Fixed &other) const;
		bool	operator >= (const Fixed &other) const;
		bool	operator <= (const Fixed &other) const;
		bool	operator == (const Fixed &other) const;
		bool	operator != (const Fixed &other) const;
//Arithmetic operators
		Fixed	operator + (const Fixed &other) const;
		Fixed	operator - (const Fixed &other) const;
		Fixed	operator * (const Fixed &other) const;
		Fixed	operator / (const Fixed &other) const;
//Increment/decrement operators
		Fixed &operator ++ (void);
		Fixed operator ++ (int);
		Fixed &operator -- (void);
		Fixed operator -- (int);
		static Fixed abs(Fixed const& value);
};
std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif
