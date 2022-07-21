/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:58:50 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 14:57:15 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

/* Constructors */
WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Default Constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	this->_type = copy._type;
}

/* Deconstructors */
WrongCat::~WrongCat()
{
	std::cout << "WrongCat Deconstructor called" << std::endl;
}

/* Overloaded Operators */
WrongCat &WrongCat::operator=(const WrongCat &sec)
{
	std::cout << "WrongCat Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	this->_type = sec._type;
	return *this;
}

/* Public Methods */
void WrongCat::makeSound() const
{
	std::cout << "wuff" << std::endl;
}

/* Getter */

/* Setter */

