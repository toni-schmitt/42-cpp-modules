/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:36:39 by tschmitt          #+#    #+#             */
/*   Updated: 2022/01/31 17:32:52 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

/* Constructors */
DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap " << this->_name << " constructs itself!" << std::endl;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
	this->_name = "undefined";
	this->ClapTrap::_name = this->_name + "_clap_trap";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : FragTrap(copy), ScavTrap(copy)
{
	std::cout << "DiamondTrap " << this->_name << " constructs itself as a copy from " << copy._name << "!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap " << this->_name << " constructs itself!" << std::endl;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
	this->_name = name;
	this->ClapTrap::_name = this->_name + "_clap_trap";
}

/* Deconstructors */
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " deconstructs itself!" << std::endl;
	/*CODE*/
}

/* Overloaded Operators */
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &sec)
{
	if (this == &sec)
		return *this;

	this->_name = sec._name;
	this->_hitPoints = sec._hitPoints;
	this->_energyPoints = sec._energyPoints;
	this->_attackDamage = sec._attackDamage;
	this->ClapTrap::_name = sec.ClapTrap::_name;
	return *this;
}

/* Public Methods */

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap has an existential crisis" << std::endl;
	std::cout << "DiamondTrap " << this->_name << ": Who Am I?" << std::endl;
	std::cout << "Voice from the Void: You are son of ClapTrap " << this->ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(std::string name)
{

	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
		return;

	std::cout << "DiamondTrap " << this->_name << " attacks " << name << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}