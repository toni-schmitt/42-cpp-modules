/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:46:52 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 13:41:39 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___CHARACTER_HPP___)
#define ___CHARACTER_HPP___

// #include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	/* Private Members */
	static const int _invLength = 4;
	AMateria *_inventory[_invLength];
	std::string _name;

public:
	/* Constructors */
	Character();
	Character(const Character &copy);
	Character(const std::string &name);
	/* Deconstructors */
	~Character();

	/* Overloaded Operators */
	Character &operator=(const Character &sec);

	/* Public Methods */
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);

	/* Getter */
	virtual const std::string &getName() const;

	/* Setter */
};

#endif