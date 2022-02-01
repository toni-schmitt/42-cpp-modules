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
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
// #include "WrongDog.hpp"
#include <iostream>

void printType(const AAnimal *animal)
{
	std::cout << "Type: " << animal->getType() << std::endl;
}

void testAnimals()
{
	std::cout << "Tests ex00:" << std::endl;

	const AAnimal *cat = new Cat();
	const AAnimal *dog = new Dog();
	const AAnimal *dog_copy = dog;
	
	// const WrongAnimal *wrong_meta = new WrongAnimal();
	// const WrongAnimal *wrong_dog = new WrongDog();
	// const WrongAnimal *wrong_cat = new WrongCat();
	// const WrongAnimal *wrong_copy_dog = wrong_dog;

	printType(cat);
	printType(dog);
	printType(dog_copy);

	// printType(wrong_meta);
	// printType(wrong_cat);
	// printType(wrong_dog);
	// printType(wrong_copy_dog);

	
	cat->makeSound();
	dog->makeSound();
	dog_copy->makeSound();

	// wrong_meta->makeSound();
	// wrong_cat->makeSound();
	// wrong_dog->makeSound();
	// wrong_copy_dog->makeSound();

	delete cat;
	delete dog;

	// delete wrong_meta;
	// delete wrong_dog;
	// delete wrong_cat;
}

int main()
{
	testAnimals();

}