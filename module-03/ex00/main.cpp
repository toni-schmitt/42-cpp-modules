/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:37:43 by toni              #+#    #+#             */
/*   Updated: 2022/01/31 16:05:06 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{

	ClapTrap fishClap("fishClap");
	ClapTrap catClap("catClap");

	catClap.attack("fishClap");
	fishClap.takeDamage(0);
	
	fishClap.attack("catClap");
	catClap.takeDamage(0);

	fishClap.beRepaired(0);
	catClap.beRepaired(0);
	
}