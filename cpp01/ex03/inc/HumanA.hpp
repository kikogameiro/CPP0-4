/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 11:27:49 by fgameiro          #+#    #+#             */
/*   Updated: 2026/07/31 13:51:03 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA{
	private:
		Weapon &arma;
		std::string	name;
	public:
		HumanA(const std::string& name, Weapon& arma);
		~HumanA();
		void	attack();
};

#endif