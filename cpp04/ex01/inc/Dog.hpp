/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:44:20 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/03 10:13:00 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog(void);
		Dog(const Dog& other);
		Dog &operator=(const Dog &other);
		~Dog();
		void	makeSound() const;
		void setIdea(int n, const std::string &idea);
		std::string getIdea(int n) const;
};

#endif