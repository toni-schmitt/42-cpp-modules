/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:00:46 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 15:45:50 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include <iostream>

void printType(const WrongAnimal *animal)
{
	std::cout << "Type: " << animal->getType() << std::endl;
}

void printType(const AAnimal *animal)
{
	std::cout << "Type: " << animal->getType() << std::endl;
}

void testAnimals()
{
	std::cout << "\n\n-- Zoo of Animals: --\n\n";
	{
		std::cout << "\n\n-- Creating Animals: --\n\n";
		// const AAnimal *meta = new AAnimal();
		const AAnimal *cat = new Cat();
		const AAnimal *dog = new Dog();
		const AAnimal *dog_copy = dog;

		std::cout << "\n\n-- Printing Types of Animals: --\n\n";
		// printType(meta);
		printType(cat);
		printType(dog);
		printType(dog_copy);

		std::cout << "\n\n-- Make some Noise!!! --\n\n";
		// meta->makeSound();
		cat->makeSound();
		dog->makeSound();
		dog_copy->makeSound();

		std::cout << "\n\n-- Bye Bye Animals --\n\n";
		// delete meta;
		delete cat;
		delete dog;
	}
	std::cout << "\n\n-- Zoo of WrongAnimals: --\n\n";
	{
		std::cout << "\n\n-- Creating Animals: --\n\n";
		const WrongAnimal *wrong_meta = new WrongAnimal();
		const WrongAnimal *wrong_dog = new WrongDog();
		const WrongAnimal *wrong_cat = new WrongCat();
		const WrongAnimal *wrong_copy_dog = wrong_dog;

		std::cout << "\n\n-- Printing Types of Animals: --\n\n";
		printType(wrong_meta);
		printType(wrong_cat);
		printType(wrong_dog);
		printType(wrong_copy_dog);

		std::cout << "\n\n-- Make some Noise!!! --\n\n";
		wrong_meta->makeSound();
		wrong_cat->makeSound();
		wrong_dog->makeSound();
		wrong_copy_dog->makeSound();

		std::cout << "\n\n-- Bye Bye Animals --\n\n";
		delete wrong_meta;
		delete wrong_dog;
		delete wrong_cat;
	}
}

void testBrains()
{
	std::cout << "\n\n-- Testing Brains? --\n\n";

	std::cout << "\n\n-- Testing Deepcopy --\n\n";

	std::cout << std::endl
			  << "1. Create a Dog (smart_boi) with a Brain from default constructor" << std::endl
			  << std::endl;

	Dog *smart_boi = new Dog();

	std::cout << std::endl
			  << "2. Creat a Dog (smart_boi_copy) with a Brain from copy constructor (from smart_boi)" << std::endl
			  << std::endl;

	Dog *smart_boi_copy = new Dog(*smart_boi);

	std::cout << std::endl
			  << "3. Testing both Brains (filling with Ideas)" << std::endl
			  << std::endl;

	std::cout
		<< "smart_boi->haveIdea(\"eat\");" << std::endl
		<< "smart_boi->haveIdea(\"eat more\");" << std::endl
		<< std::endl
		<< "smart_boi_copy->haveIdea(\"eat\");" << std::endl
		<< "smart_boi_copy->haveIdea(\"eat more\");"
		<< std::endl;

	smart_boi->haveIdea("eat");
	smart_boi->haveIdea("eat more");

	smart_boi_copy->haveIdea("eat");
	smart_boi_copy->haveIdea("eat more");

	std::cout << std::endl
			  << "4. Deleteing original smart_boi. Copy of original smart_boi should still have all ideas" << std::endl
			  << std::endl;

	delete smart_boi;

	std::cout << std::endl
			  << "5. Testing smart_boi_copy's brain. smart_boi_copy's brain should be accessable and not SEGFAULT" << std::endl
			  << std::endl;

	std::cout
		<< "smart_boi_copy->looseIdea(\"eat more\");" << std::endl
		<< "smart_boi_copy->haveIdea(\"eat less\");"
		<< std::endl;

	smart_boi_copy->looseIdea("eat more");
	smart_boi_copy->haveIdea("eat less");

	delete smart_boi_copy;
}

void testAbstract()
{
	std::cout << std::endl
			  << std::endl
			  << "Testing Abstract Animal Class" << std::endl
			  << std::endl;

	std::cout << "Uncomment following Code to stop compilation:" << std::endl;

	// {
	// const AAnimal *this_does_not_work = new AAnimal();

	// this_does_not_work->makeSound();
	// }

	std::cout << "//{" << std::endl
			  << "\t// const AAnimal *this_does_not_work = new AAnimal();"
			  << std::endl
			  << "\t// this_does_not_work->makeSound();" << std::endl
			  << "// }" << std::endl << std::endl;
}

int main()
{
	testAnimals();

	testBrains();

	testAbstract();

	system("leaks zoo");
}