/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:44:15 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/03 10:38:51 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "Colors.h"

class AAnimal
{
	protected:
		std::string	type;
	public:
		AAnimal(void);
		virtual ~AAnimal();
		virtual void		makeSound() const = 0;
};

#endif
