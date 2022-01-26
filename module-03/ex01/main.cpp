/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:37:43 by toni              #+#    #+#             */
/*   Updated: 2022/01/26 18:26:53 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap1("John");
	ClapTrap clapTrap2("BOB");
	ScavTrap scavTrap1("Mars");

	clapTrap1.attack("BOB");
	clapTrap2.takeDamage(0);
	scavTrap1.attack("John");
	clapTrap1.takeDamage(20);
	clapTrap2.attack("Mars");
	scavTrap1.takeDamage(0);

	scavTrap1.guardGate();

	clapTrap1.beRepaired(5);
	scavTrap1.takeDamage(2);
	clapTrap2.beRepaired(7);
}