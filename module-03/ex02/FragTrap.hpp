/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:51:07 by tschmitt          #+#    #+#             */
/*   Updated: 2022/01/31 15:56:01 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___FRAG_TRAP_HPP___)
#define ___FRAG_TRAP_HPP___

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	/* Private Members */
public:
	/* Constructors */
	FragTrap();
	FragTrap(const FragTrap& copy);
	FragTrap(std::string name);
	/* Deconstructors */
	~FragTrap();

	/* Overloaded Operators */
	FragTrap &operator=(const FragTrap &sec);
	/* Public Methods */
	void highFivesGuys();
};

#endif // ___FRAG_TRAP_HPP___
