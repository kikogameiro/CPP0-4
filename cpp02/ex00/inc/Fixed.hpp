/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:53:08 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/18 18:33:51 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int					_fixed_point;
		static const int	_fractional_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
	};

#endif

