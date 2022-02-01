/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:58:50 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 15:42:52 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

/* Constructors */
Cat::Cat() : Animal()
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->_type = "cat";
	this->_pBrain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	this->_type = copy._type;
	this->_pBrain = copy._pBrain;
}

/* Deconstructors */
Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
	delete this->_pBrain;
}

/* Overloaded Operators */
Cat &Cat::operator=(const Cat &sec)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	this->_type = sec._type;
	return *this;
}

/* Public Methods */
void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}

/* Getter */

/* Setter */

