/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:14:45 by tschmitt          #+#    #+#             */
/*   Updated: 2022/01/31 17:32:45 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___DIAMONDTRAP_HPP___)
#define ___DIAMONDTRAP_HPP___

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	/* Private Members */
	std::string _name;
public:
	/* Constructors */
	DiamondTrap();
	DiamondTrap(const DiamondTrap& copy);
	DiamondTrap(std::string name);
	/* Deconstructors */
	~DiamondTrap();

	/* Overloaded Operators */
	DiamondTrap &operator=(const DiamondTrap &sec);
	/* Public Methods */
	void whoAmI();
	void attack(std::string name);
};


#endif