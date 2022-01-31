/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:40:43 by toni              #+#    #+#             */
/*   Updated: 2022/01/26 18:20:53 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___SCAV_TRAP_HPP___)
#define ___SCAV_TRAP_HPP___

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	/* Private Members */
public:
	/* Constructors */
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy);
	/* Deconstructors */
	~ScavTrap();

	/* Overloaded Operators */
	ScavTrap &operator=(const ScavTrap &sec);
	/* Public Methods */
	void guardGate();
};

#endif // ___SCAV_TRAP_HPP___
