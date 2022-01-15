/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:42:21 by toni              #+#    #+#             */
/*   Updated: 2022/01/15 20:26:50 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon *_weapon;
	std::string _name;
public:
	void attack();
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
};

#endif