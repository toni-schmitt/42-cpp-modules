/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:43:30 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 13:50:47 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

#include <iostream>

/* Constructors */
AMateria::AMateria() : _type("undefined")
{
	// std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy) : _type(copy._type)
{
	// std::cout << "AMateria Copy Constructor called" << std::endl;
}

AMateria::AMateria(const std::string &type) : _type(type)
{
}

/* Deconstructors */
AMateria::~AMateria()
{
	// std::cout << "AMateria Deconstructor called" << std::endl;
	/*CODE*/
}

/* Overloaded Operators */
AMateria &AMateria::operator=(const AMateria &sec)
{
	// std::cout << "AMateria Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	this->_type = sec._type;
	return *this;
}

/* Public Methods */
std::string const &AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << std::endl;
}

/* Getter */

/* Setter */
