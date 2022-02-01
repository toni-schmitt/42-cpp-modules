/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:57:14 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 15:34:48 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

/* Constructors */
Dog::Dog() : Animal()
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->_type = "dog";
	this->_pBrain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	this->_type = copy._type;
	this->_pBrain = copy._pBrain;
}

/* Deconstructors */
Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
	delete this->_pBrain;
}

/* Overloaded Operators */
Dog &Dog::operator=(const Dog &sec)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	this->_type = sec._type;
	return *this;
}

/* Public Methods */
void Dog::makeSound() const
{
	std::cout << "wuff" << std::endl;
}

/* Getter */

/* Setter */

