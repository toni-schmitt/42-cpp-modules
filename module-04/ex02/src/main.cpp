/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:00:46 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 17:41:03 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include <iostream>

void printType(const AAnimal *animal)
{
	std::cout << "Type: " << animal->getType() << std::endl;
}

void printType(const AWrongAnimal *wrong_animal)
{
	std::cout << "Type: " << wrong_animal->getType() << std::endl;
}

void testAnimals()
{
	std::cout << "\n\n-- Zoo of Animals: --\n\n";
	{
		std::cout << "\n\n-- Creating Animals: --\n\n";
		const Cat *cat = new Cat();
		const Dog *dog = new Dog();
		const Dog *dog_copy = dog;

		std::cout << "\n\n-- Printing Types of Animals: --\n\n";
		printType(cat);
		printType(dog);
		printType(dog_copy);

		std::cout << "\n\n-- Make some Noise!!! --\n\n";
		cat->makeSound();
		dog->makeSound();
		dog_copy->makeSound();

		std::cout << "\n\n-- Bye Bye Animals --\n\n";
		delete cat;
		delete dog;
	}
	std::cout << "\n\n-- Zoo of WrongAnimals: --\n\n";
	{
		std::cout << "\n\n-- Creating Animals: --\n\n";
		const AWrongAnimal *wrong_dog = new WrongDog();
		const AWrongAnimal *wrong_cat = new WrongCat();
		const AWrongAnimal *wrong_copy_dog = wrong_dog;

		std::cout << "\n\n-- Printing Types of Animals: --\n\n";
		printType(wrong_cat);
		printType(wrong_dog);
		printType(wrong_copy_dog);

		std::cout << "\n\n-- Make some Noise!!! --\n\n";
		wrong_cat->makeSound();
		wrong_dog->makeSound();
		wrong_copy_dog->makeSound();

		std::cout << "\n\n-- Bye Bye Animals --\n\n";
		delete wrong_dog;
		delete wrong_cat;
	}
	std::cout << "\n\n-- Uncomment Following Code to stop compilation --\n\n";
	// {
	// 	std::cout << "\n\n-- This part will not compile since you cannot create an AWrongAnimal anymore, because it is now Abstract --\n\n";
	// 	const WrongAnimal *wrong_meta = new WrongAnimal();

	// 	std::cout << "\n\n-- Printing Types of Animals: --\n\n";
	// 	printType(wrong_meta);

	// 	std::cout << "\n\n-- Make some Noise!!! --\n\n";
	// 	wrong_meta->makeSound();

	// 	std::cout << "\n\n-- Bye Bye Animals --\n\n";
	// 	delete wrong_meta;
	// }
	// {
	// 	std::cout << "\n\n-- This part will not compile since you cannot create an AAnimal anymore, because it is now Abstract --\n\n";
	// 	const AAnimal *meta = new AAnimal();

	// 	std::cout << "\n\n-- Printing Types of Animals: --\n\n";
	// 	printType(meta);

	// 	std::cout << "\n\n-- Make some Noise!!! --\n\n";
	// 	meta->makeSound();

	// 	std::cout << "\n\n-- Bye Bye Animals --\n\n";
	// 	delete meta;
	// }
}

int main()
{
	testAnimals();
}