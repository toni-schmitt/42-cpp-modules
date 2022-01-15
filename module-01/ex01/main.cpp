/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:13:16 by toni              #+#    #+#             */
/*   Updated: 2022/01/15 19:30:08 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

void testHorde(int n, std::string name)
{
	std::cout << "Getting " << n << " Zombies named " << name << std::endl;
	Zombie *horde = zombieHorde(n, name);

	std::cout << "Announcing Zombies..." << std::endl;
	for (int i = 0; i < n; i++)
	{
		horde[i].announce();
	}

	std::cout << "Destroying Zombie Horde..." << std::endl;
	delete [] horde;
	
}

int main(void)
{
	testHorde(3, "Gerald");
	testHorde(8, "Robert");
	return 0;
}
