/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 10:45:14 by toni              #+#    #+#             */
/*   Updated: 2022/01/26 11:48:31 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie()
{
	this->_name = "";
}

Zombie::Zombie(std::string zombie_name)
{
	this->_name = zombie_name;
}

Zombie::~Zombie()
{
	std::cout << "[DEBUG] Zombie " << this->_name << " was destroyed" << std::endl;
}

void Zombie::setName(std::string zombies_name)
{
	this->_name = zombies_name;
}

void Zombie::announce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}