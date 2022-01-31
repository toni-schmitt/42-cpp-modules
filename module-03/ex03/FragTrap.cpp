/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:50:57 by tschmitt          #+#    #+#             */
/*   Updated: 2022/01/31 16:11:16 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

/* Constructors */
FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " constructs itself!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap " << this->_name << " constructs itself as a copy from " << copy._name << "!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " constructs itself!" << std::endl;
}

/* Deconstructors */
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " deconstructs itself!" << std::endl;
}

/* Overloaded Operators */
FragTrap &FragTrap::operator=(const FragTrap &sec)
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
void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap" << this->_name << "high fives guys :)" << std::endl;
}
