/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 09:59:27 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/03 10:04:09 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "Colors.h"

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		~Brain(void);
		const std::string	&getIdea(int n) const;
		void	setIdea(int n, const std::string &idea);
};

#endif
