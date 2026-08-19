#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int					_fixed_point;
		static const int	_fractional_bits = 8;
		float	toFloat( void ) const;
		int		toInt( void ) const;
    public:
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed &operator=(const Fixed &other);
		~Fixed();
};

#endif

