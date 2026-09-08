/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:47:43 by fgameiro          #+#    #+#             */
/*   Updated: 2026/09/08 10:23:41 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "inc/Animal.hpp"
#include "inc/Dog.hpp"
#include "inc/Cat.hpp"
#include "inc/WrongAnimal.hpp"
#include "inc/WrongCat.hpp"

int main()
{
	std::cout << YELLOW << "========== CORRECT ANIMALS ==========" << RESET << std::endl;

	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	std::cout << "Animal type: " << animal->getType() << std::endl;
	animal->makeSound();

	std::cout << std::endl;

	std::cout << "Dog type: " << dog->getType() << std::endl;
	dog->makeSound();

	std::cout << std::endl;

	std::cout << "Cat type: " << cat->getType() << std::endl;
	cat->makeSound();

	std::cout << std::endl;

	delete animal;
	delete dog;
	delete cat;


	std::cout << std::endl;
	std::cout << YELLOW << "========== WRONG ANIMALS ==========" << RESET << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	WrongCat wrongCato;

	std::cout << std::endl;

	std::cout << "WrongAnimal type: "
			<< wrongAnimal->getType() << std::endl;
	wrongAnimal->makeSound();

	std::cout << std::endl;

	std::cout << "WrongCat type: "
			<< wrongCat->getType() << std::endl;
	wrongCat->makeSound();

	std::cout << std::endl;

	std::cout << "WrongCato type: "
			<< wrongCato.getType() << std::endl;
	wrongCato.makeSound();

	std::cout << std::endl;

	delete wrongAnimal;
	delete wrongCat;
	return 0;
}
