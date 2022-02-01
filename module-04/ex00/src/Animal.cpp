/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:46:42 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 14:57:11 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>

/* Constructors */
Animal::Animal()
{
	std::cout << "Animal Default Constructor called" << std::endl;
	this->_type = "";
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	this->_type = copy._type;
}

/* Deconstructors */
Animal::~Animal()
{
	std::cout << "Animal Deconstructor called" << std::endl;
}

/* Overloaded Operators */
Animal &Animal::operator=(const Animal &sec)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	this->_type = sec._type;
	return *this;
}

/* Public Methods */
void Animal::makeSound() const
{
	std::cout << "I am Mark Zuckerberg" << std::endl;
}

/* Getter */
std::string Animal::getType() const
{
	return this->_type;
}

/* Setter */

