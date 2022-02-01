/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:59:16 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 15:03:15 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>

/* Constructors */
WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
	this->_type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	this->_type = copy._type;
}

/* Deconstructors */
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor called" << std::endl;
}

/* Overloaded Operators */
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &sec)
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	this->_type = sec._type;
	return *this;
}

/* Public Methods */
void WrongAnimal::makeSound() const
{
	std::cout << "I am Jeff Bezos" << std::endl;
}

/* Getter */
std::string WrongAnimal::getType() const
{
	return this->_type;
}

/* Setter */

