/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:47:43 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/03 10:19:24 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.hpp"
#include "inc/Dog.hpp"
#include "inc/Cat.hpp"
#include "inc/Colors.h"
#include <iostream>

int main(void)
{
	/* ========================================================= */
	/*                 POLYMORPHISM TEST                         */
	/* ========================================================= */

	std::cout << CYAN << "\n========== POLYMORPHISM TEST ==========\n" << RESET << std::endl;

	const int size = 4;
	Animal *animals[size];

	// Half Dogs, half Cats
	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();

	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();

	// Test polymorphic makeSound()
	for (int i = 0; i < size; i++)
	{
		std::cout << "Animal [" << i << "] type: "
				<< animals[i]->getType() << std::endl;

		animals[i]->makeSound();
		std::cout << std::endl;
	}


	/* ========================================================= */
	/*              DELETE THROUGH ANIMAL POINTER                */
	/* ========================================================= */

	std::cout << CYAN << "\n========== DELETE TEST ==========\n" << RESET << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << "Deleting Animal [" << i << "]..." << std::endl;
		delete animals[i];
		std::cout << std::endl;
	}


	/* ========================================================= */
	/*                  DEEP COPY: DOG                            */
	/* ========================================================= */

	std::cout << CYAN << "\n========== DOG DEEP COPY TEST ==========\n" << RESET << std::endl;

	Dog dog1;

	dog1.setIdea(0, "Catch the ball");
	dog1.setIdea(1, "Chase the cat");

	Dog dog2(dog1);

	std::cout << "Original dog idea 0: "
			<< dog1.getIdea(0) << std::endl;

	std::cout << "Copied dog idea 0:   "
			<< dog2.getIdea(0) << std::endl;

	// Modify the copy
	dog2.setIdea(0, "Sleep");

	std::cout << "\nAfter modifying the COPY:" << std::endl;

	std::cout << "Original dog idea 0: "
			<< dog1.getIdea(0) << std::endl;

	std::cout << "Copied dog idea 0:   "
			<< dog2.getIdea(0) << std::endl;


	/* ========================================================= */
	/*                 DEEP COPY: CAT                            */
	/* ========================================================= */

	std::cout << CYAN << "\n========== CAT DEEP COPY TEST ==========\n" << RESET << std::endl;

	Cat cat1;

	cat1.setIdea(0, "Climb the tree");
	cat1.setIdea(1, "Sleep all day");

	Cat cat2(cat1);

	std::cout << "Original cat idea 0: "
			<< cat1.getIdea(0) << std::endl;

	std::cout << "Copied cat idea 0:   "
			<< cat2.getIdea(0) << std::endl;

	// Modify the copy
	cat2.setIdea(0, "Eat fish");

	std::cout << "\nAfter modifying the COPY:" << std::endl;

	std::cout << "Original cat idea 0: "
			<< cat1.getIdea(0) << std::endl;

	std::cout << "Copied cat idea 0:   "
			<< cat2.getIdea(0) << std::endl;


	/* ========================================================= */
	/*             ASSIGNMENT OPERATOR TEST                      */
	/* ========================================================= */

	std::cout << CYAN << "\n========== ASSIGNMENT TEST ==========\n" << RESET << std::endl;

	Dog dog3;
	Dog dog4;

	dog3.setIdea(0, "Original idea");

	dog4 = dog3;

	std::cout << "dog3 idea: "
			<< dog3.getIdea(0) << std::endl;

	std::cout << "dog4 idea: "
			<< dog4.getIdea(0) << std::endl;

	dog4.setIdea(0, "Changed idea");

	std::cout << "\nAfter modifying dog4:" << std::endl;

	std::cout << "dog3 idea: "
			<< dog3.getIdea(0) << std::endl;

	std::cout << "dog4 idea: "
			<< dog4.getIdea(0) << std::endl;

	std::cout << CYAN << "\n========== END OF TESTING ==========\n" << RESET << std::endl;

	return (0);
}
