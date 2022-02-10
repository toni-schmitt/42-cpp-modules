/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:31:12 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 13:50:31 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

/* Constructors */
Ice::Ice()
{
	// std::cout << "Ice Default Constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &copy)
{
	// std::cout << "Ice Copy Constructor called" << std::endl;
	this->_type = copy._type;
}

Ice::Ice(const std::string &type)
{
	this->_type = type;
}

/* Deconstructors */
Ice::~Ice()
{
	// std::cout << "Ice Deconstructor called" << std::endl;
	/*CODE*/
}

/* Overloaded Operators */
Ice &Ice::operator=(const Ice &sec)
{
	// std::cout << "Ice Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	this->_type = sec._type;
	return *this;
}

/* Public Methods */
AMateria *Ice::clone() const
{
	Ice *cloned = new Ice(this->_type);
	return cloned;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/* Getter */
const std::string &Ice::getType() const
{
	return this->_type;
}

/* Setter */

