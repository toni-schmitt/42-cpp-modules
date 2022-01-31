/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:13:55 by toni              #+#    #+#             */
/*   Updated: 2022/01/26 18:16:00 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___CLAP_TRAP_HPP___)
#define ___CLAP_TRAP_HPP___

#include <string>

class ClapTrap
{
protected:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copy);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &sec);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif // ___CLAP_TRAP_HPP___
