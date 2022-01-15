/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 10:41:24 by toni              #+#    #+#             */
/*   Updated: 2022/01/15 10:51:29 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string _name;
public:
	void announce();

	Zombie(std::string zombies_name);
	~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif