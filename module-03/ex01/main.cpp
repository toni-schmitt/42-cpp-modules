/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:37:43 by toni              #+#    #+#             */
/*   Updated: 2022/01/31 16:07:10 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{

	ClapTrap fishClap("fishClap");
	ClapTrap catClap("catClap");
	ScavTrap burgerClap("burgerClap");

	catClap.attack("fishClap");
	fishClap.takeDamage(0);
	
	fishClap.attack("catClap");
	catClap.takeDamage(0);

	burgerClap.attack("catClap");
	catClap.takeDamage(20);

	catClap.attack("burgerClap");
	burgerClap.takeDamage(0);

	burgerClap.guardGate();

	fishClap.beRepaired(0);
	catClap.beRepaired(0);
	burgerClap.beRepaired(0);
	
}