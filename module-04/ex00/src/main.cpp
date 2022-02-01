/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:00:46 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 15:29:11 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include <iostream>

void printType(const WrongAnimal *animal)
{
	std::cout << "Type: " << animal->getType() << std::endl;
}

void printType(const Animal *animal)
{
	std::cout << "Type: " << animal->getType() << std::endl;
}

int main()
{
	const Animal *meta = new Animal();
	const Animal *cat = new Cat();
	const Animal *dog = new Dog();
	const Animal *dog_copy = dog;
	
	const WrongAnimal *wrong_meta = new WrongAnimal();
	const WrongAnimal *wrong_dog = new WrongDog();
	const WrongAnimal *wrong_cat = new WrongCat();
	const WrongAnimal *wrong_copy_dog = wrong_dog;

	printType(meta);
	printType(cat);
	printType(dog);
	printType(dog_copy);

	printType(wrong_meta);
	printType(wrong_cat);
	printType(wrong_dog);
	printType(wrong_copy_dog);

	
	meta->makeSound();
	cat->makeSound();
	dog->makeSound();
	dog_copy->makeSound();

	wrong_meta->makeSound();
	wrong_cat->makeSound();
	wrong_dog->makeSound();
	wrong_copy_dog->makeSound();

	delete meta;
	delete cat;
	delete dog;

	delete wrong_meta;
	delete wrong_dog;
	delete wrong_cat;
}