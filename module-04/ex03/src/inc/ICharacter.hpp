/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:42:28 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 13:30:07 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___ICHARACTER_HPP___)
#define ___ICHARACTER_HPP___

#include <string>
#include "AMateria.hpp"

class ICharacter
{
public:
	/* Deconstructors */
	virtual ~ICharacter() {}

	/* Public Methods */
	virtual const std::string &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter &target) = 0;
};

#endif