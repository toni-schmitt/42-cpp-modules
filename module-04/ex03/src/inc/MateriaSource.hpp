/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:58:26 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 13:01:34 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___MATERIASOURCE_HPP___)
#define ___MATERIASOURCE_HPP___

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	/* Private Members */
	static const int _invLength = 4;
	AMateria *_inventory[_invLength];
public:
	/* Constructors */
	MateriaSource();
	MateriaSource(const MateriaSource& copy);
	/* Deconstructors */
	~MateriaSource();

	/* Overloaded Operators */
	MateriaSource &operator=(const MateriaSource &sec);

	/* Public Methods */
	virtual void learnMateria(AMateria *m);
	virtual AMateria *createMateria(std::string const &type);

	/* Getter */

	/* Setter */

};


#endif