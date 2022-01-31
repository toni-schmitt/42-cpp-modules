/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:24:44 by toni              #+#    #+#             */
/*   Updated: 2022/01/31 16:10:54 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

/* Constructors */
ClapTrap::ClapTrap()
{
	this->_name = "undefined";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClaptTrap " << this->_name << " constructs itself!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	std::cout << "ClaptTrap " << this->_name << " constructs itself as a copy from " << copy._name << "!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClaptTrap " << this->_name << " constructs itself!" << std::endl;
}

/* Deconstructors */
ClapTrap::~ClapTrap()
{
	/*CODE*/
	std::cout << "ClaptTrap " << this->_name << " deconstructs itself!" << std::endl;
}

/* Overloaded Operators */
ClapTrap &ClapTrap::operator=(const ClapTrap &sec)
{
	std::cout << "ClaptTrap " << this->_name << " assignes itself to " << sec._name << "!" << std::endl;
	if (this == &sec)
		return *this;

	this->_name = sec._name;
	this->_hitPoints = sec._hitPoints;
	this->_energyPoints = sec._energyPoints;
	this->_attackDamage = sec._attackDamage;
	return *this;
}

/* Public Methods */

void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
		return;

	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		return;

	std::cout << "ClapTrap " << this->_name << " takes " << amount << " of Damge!" << std::endl;
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
		return;

	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " repairs itself, gaining " << amount << " hit points!" << std::endl;
}
