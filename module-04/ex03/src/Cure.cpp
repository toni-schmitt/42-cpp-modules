/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:17:54 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 13:50:26 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

/* Constructors */
Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure Default Constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	// std::cout << "Cure Copy Constructor called" << std::endl;
}

Cure::Cure(const std::string &type) : AMateria(type)
{
}

/* Deconstructors */
Cure::~Cure()
{
	// std::cout << "Cure Deconstructor called" << std::endl;
	/*CODE*/
}

/* Overloaded Operators */
Cure &Cure::operator=(const Cure &sec)
{
	// std::cout << "Cure Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	this->_type = sec._type;
	return *this;
}

/* Public Methods */
AMateria *Cure::clone() const
{
	Cure *cloned = new Cure(this->_type);
	return cloned;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

/* Getter */
const std::string &Cure::getType() const
{
	return this->_type;
}

/* Setter */

