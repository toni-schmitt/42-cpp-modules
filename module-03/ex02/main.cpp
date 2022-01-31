/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:37:43 by toni              #+#    #+#             */
/*   Updated: 2022/01/31 16:09:33 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{

	ClapTrap fishClap("fishClap");
	ClapTrap catClap("catClap");
	ScavTrap burgerClap("burgerClap");
	FragTrap ringClap("ringClap");

	catClap.attack("fishClap");
	fishClap.takeDamage(0);
	
	fishClap.attack("catClap");
	catClap.takeDamage(0);

	burgerClap.attack("catClap");
	catClap.takeDamage(20);

	catClap.beRepaired(30);

	catClap.attack("burgerClap");
	burgerClap.takeDamage(0);

	ringClap.attack("fishClap");
	fishClap.takeDamage(30);

	fishClap.beRepaired(40);
	
	fishClap.attack("ringClap");
	ringClap.takeDamage(0);

	burgerClap.guardGate();
	ringClap.highFivesGuys();

	fishClap.beRepaired(0);
	catClap.beRepaired(0);
	burgerClap.beRepaired(0);
	fishClap.beRepaired(0);
	
}