/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 10:50:38 by toni              #+#    #+#             */
/*   Updated: 2022/01/15 11:05:58 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

void zombiesOnStack()
{
	std::cout << "Following Zombies should be created on Stack and destroyed as they go out of scope (for loop in function)" << std::endl;
	std::cout << "Creating 10 Zombies that will announce themselves with name: ZOMBIE<n>" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::string name = "ZOMBIE";
		name += (char)(i + '0');
		randomChump(name);
		std::cout << "Now Deconstructor should be called" << std::endl;
	}
}

void zombiesOnHeap()
{
	std::cout << "Following Zombies should be created on Heap and destroyed as they get deleted" << std::endl;
	std::cout << "Please enter 5 Zombie names" << std::endl;

	std::string zombie_names[5];

	for (int i = 0; i < 5; i++)
	{
		std::cin >> zombie_names[i];
	}

	std::cout << "Zombies will now be created (on the heap)" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		Zombie *zombie = newZombie(zombie_names[i]);
		std::cout << "Zombie " << i << " is announcing them:" << std::endl;
		zombie->announce();
		std::cout << "Deleting Zombie " << i << " now, Deconstructor should be called" << std::endl;
		delete zombie;
	}


}

int main(void)
{
	zombiesOnStack();

	zombiesOnHeap();

	return 0;
}
