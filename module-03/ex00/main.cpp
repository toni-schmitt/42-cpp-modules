/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:37:43 by toni              #+#    #+#             */
/*   Updated: 2022/01/26 16:39:07 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap1("John");
	ClapTrap clapTrap2("BOB");

	clapTrap1.attack("BOB");
	clapTrap2.takeDamage(0);
	clapTrap2.attack("John");
	clapTrap1.takeDamage(0);

	clapTrap1.beRepaired(2);
	clapTrap2.beRepaired(3);
}