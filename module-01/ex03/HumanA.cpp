/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:43:31 by toni              #+#    #+#             */
/*   Updated: 2022/01/15 20:27:15 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &wep)
{
	this->_name = name;
	this->_weapon = &wep;
}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;;
}
