/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:46:47 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 13:50:18 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include <iostream>

/* Constructors */
Character::Character()
{
	// std::cout << "Character Default Constructor called" << std::endl;
	this->_name = "undefined";
	for (int i = 0; i < _invLength; i++)
		this->_inventory[i] = nullptr;
}

Character::Character(const Character &copy)
{
	// std::cout << "Character Copy Constructor called" << std::endl;
	this->_name = copy._name;
	for (int i = 0; i < _invLength; i++)
	{
		if (this->_inventory[i] != nullptr)
			delete this->_inventory[i];
	
		this->_inventory[i] = copy._inventory[i];
	}
}

Character::Character(const std::string &name)
{
	this->_name = name;
	for (int i = 0; i < _invLength; i++)
		this->_inventory[i] = nullptr;
}

/* Deconstructors */
Character::~Character()
{
	// std::cout << "Character Deconstructor called" << std::endl;
	for (int i = 0; i < _invLength; i++)
		if (this->_inventory[i] != nullptr)
			delete this->_inventory[i];
}

/* Overloaded Operators */
Character &Character::operator=(const Character &sec)
{
	// std::cout << "Character Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	for (int i = 0; i < _invLength; i++)
	{
		if (this->_inventory[i] != nullptr)
			delete this->_inventory[i];

		this->_inventory[i] = sec._inventory[i];
	}
	this->_name = sec._name;

	return *this;
}

/* Public Methods */
void Character::equip(AMateria *m)
{
	if (m == nullptr)
		return;

	for (int i = 0; i < _invLength; i++)
	{
		if (this->_inventory[i] == nullptr)
		{
			this->_inventory[i] = m;
			break;
		}
	}
	
}

void Character::unequip(int idx)
{
	if (this->_inventory[idx] == nullptr)
		return;

	AMateria *unequiped = this->_inventory[idx];
	this->_inventory[idx] = nullptr;
	delete unequiped;
}

void Character::use(int idx, ICharacter &target)
{
	if (this->_inventory[idx] == nullptr)
		return;
	
	this->_inventory[idx]->use(target);
}

/* Getter */
const std::string &Character::getName() const
{
	return this->_name;
}

/* Setter */

