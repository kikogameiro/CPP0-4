/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:47:43 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/03 10:45:04 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/AAnimal.hpp"
#include "inc/Dog.hpp"
#include "inc/Cat.hpp"
#include <iostream>

int main(void)
{
	//AAnimal a;
	// Polymorphism
	AAnimal *dog = new Dog();
	AAnimal *cat = new Cat();

	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;


	// Deep copy - Dog
	Dog dog1;

	dog1.setIdea(0, "Catch the ball");

	Dog dog2(dog1);

	std::cout << "\nDog1: " << dog1.getIdea(0) << std::endl;
	std::cout << "Dog2: " << dog2.getIdea(0) << std::endl;

	dog2.setIdea(0, "Sleep");

	std::cout << "\nAfter changing Dog2:" << std::endl;
	std::cout << "Dog1: " << dog1.getIdea(0) << std::endl;
	std::cout << "Dog2: " << dog2.getIdea(0) << std::endl;


	// Deep copy - Cat
	Cat cat1;

	cat1.setIdea(0, "Catch a mouse");

	Cat cat2(cat1);

	cat2.setIdea(0, "Sleep");

	std::cout << "\nCat1: " << cat1.getIdea(0) << std::endl;
	std::cout << "Cat2: " << cat2.getIdea(0) << std::endl;


	// Assignment
	Dog dog3;

	dog3 = dog1;

	std::cout << "\nDog3 after assignment: "
				<< dog3.getIdea(0) << std::endl;


	// Array of AAnimal pointers
	AAnimal *animals[4];

	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();

	for (int i = 0; i < 4; i++)
		animals[i]->makeSound();

	for (int i = 0; i < 4; i++)
		delete animals[i];

	return (0);
}