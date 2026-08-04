/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 11:27:54 by fgameiro          #+#    #+#             */
/*   Updated: 2026/07/31 14:10:23 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB{
	private:
		Weapon *arma;
		std::string	name;
	public:
		HumanB(const std::string& name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon& weapon);
};

#endif