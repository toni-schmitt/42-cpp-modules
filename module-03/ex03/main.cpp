/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:37:43 by toni              #+#    #+#             */
/*   Updated: 2022/01/31 17:32:11 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{

	ClapTrap fishClap("fishClap");
	ClapTrap catClap("catClap");
	ScavTrap burgerClap("burgerClap");
	FragTrap ringClap("ringClap");
	DiamondTrap ghostTrap("ghostTrap");

	catClap.attack("fishClap");
	fishClap.takeDamage(0);
	
	fishClap.attack("catClap");
	catClap.takeDamage(0);

	catClap.beRepaired(30);

	burgerClap.attack("catClap");
	catClap.takeDamage(20);

	catClap.attack("burgerClap");
	burgerClap.takeDamage(0);

	fishClap.beRepaired(40);

	ringClap.attack("fishClap");
	fishClap.takeDamage(30);
	
	fishClap.attack("ringClap");
	ringClap.takeDamage(0);

	ghostTrap.attack("ringClap");
	ringClap.takeDamage(30);

	burgerClap.guardGate();
	ringClap.highFivesGuys();
	ghostTrap.whoAmI();

	fishClap.beRepaired(0);
	catClap.beRepaired(0);
	burgerClap.beRepaired(0);
	fishClap.beRepaired(0);
	ghostTrap.beRepaired(0);
	
}