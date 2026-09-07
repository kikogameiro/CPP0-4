/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:44:22 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/03 10:41:24 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* brain;
	public:
		Cat(void);
		Cat(const Cat& other);
		Cat &operator=(const Cat &other);
		~Cat();
		void	makeSound() const;
		void setIdea(int n, const std::string &idea);
		std::string getIdea(int n) const;
};

#endif

