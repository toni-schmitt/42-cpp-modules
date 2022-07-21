/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:58:14 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 13:50:36 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

#include <iostream>

/* Constructors */
MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource Default Constructor called" << std::endl;
	
	for (int i = 0; i < _invLength; i++)
		this->_inventory[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	// std::cout << "MateriaSource Copy Constructor called" << std::endl;
	
	for (int i = 0; i < _invLength; i++)
	{
		if (this->_inventory[i] != nullptr)
			delete this->_inventory[i];
	
		this->_inventory[i] = copy._inventory[i]->clone();
	}
}

/* Deconstructors */
MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource Deconstructor called" << std::endl;

	for (int i = 0; i < _invLength; i++)
		if (this->_inventory[i] != nullptr)
			delete this->_inventory[i];
}

/* Overloaded Operators */
MateriaSource &MateriaSource::operator=(const MateriaSource &sec)
{
	// std::cout << "MateriaSource Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	for (int i = 0; i < _invLength; i++)
	{
		if (this->_inventory[i] != nullptr)
			delete this->_inventory[i];

		this->_inventory[i] = sec._inventory[i]->clone();
	}

	return *this;
}

/* Public Methods */
void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < _invLength; i++)
	{
		if (this->_inventory[i] == nullptr)
		{
			this->_inventory[i] = m->clone();
			break;
		}
	}
	
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < _invLength; i++)
	{
		if (this->_inventory[i] != nullptr)
			if (this->_inventory[i]->getType() == type)
				return this->_inventory[i]->clone();
	}
	return nullptr;
}

/* Getter */

/* Setter */

