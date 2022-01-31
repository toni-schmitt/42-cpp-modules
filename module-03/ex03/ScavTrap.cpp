/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:16:12 by toni              #+#    #+#             */
/*   Updated: 2022/01/31 16:11:51 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

/* Constructors */
ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " constructs itself!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap " << this->_name << " constructs itself as a copy from " << copy._name << "!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " constructs itself!" << std::endl;
}

/* Deconstructors */
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " deconstructs itself!" << std::endl;
}

/* Overloaded Operators */
ScavTrap &ScavTrap::operator=(const ScavTrap &sec)
{
	if (this == &sec)
		return *this;

	this->_name = sec._name;
	this->_hitPoints = sec._hitPoints;
	this->_energyPoints = sec._energyPoints;
	this->_attackDamage = sec._attackDamage;
	return *this;
}

/* Public Methods */
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is gatekeeping :(" << std::endl;
}
