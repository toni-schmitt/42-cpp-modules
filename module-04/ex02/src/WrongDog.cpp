/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:57:14 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 14:57:17 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

#include <iostream>

/* Constructors */
WrongDog::WrongDog()
{
	std::cout << "WrongDog Default Constructor called" << std::endl;
	this->_type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &copy)
{
	std::cout << "WrongDog Copy Constructor called" << std::endl;
	this->_type = copy._type;
}

/* Deconstructors */
WrongDog::~WrongDog()
{
	std::cout << "WrongDog Deconstructor called" << std::endl;
}

/* Overloaded Operators */
WrongDog &WrongDog::operator=(const WrongDog &sec)
{
	std::cout << "WrongDog Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	this->_type = sec._type;
	return *this;
}

/* Public Methods */
void WrongDog::makeSound() const
{
	std::cout << "meow" << std::endl;
}

/* Getter */
std::string WrongDog::getType() const
{
	return this->_type;
}

/* Setter */

