/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:42:53 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 13:42:15 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___AMATERIA_HPP___)
#define ___AMATERIA_HPP___

#include <string>

class ICharacter;

class AMateria
{
private:
	/* Private Members */
protected:
	/* Protected Members */
	std::string _type;
public:
	/* Constructors */
	AMateria();
	AMateria(const AMateria& copy);
	AMateria(const std::string &type);
	/* Deconstructors */
	virtual ~AMateria() = 0;

	/* Overloaded Operators */
	AMateria &operator=(const AMateria &sec);

	/* Public Methods */
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);

	/* Getter */
	virtual const std::string &getType() const;

	/* Setter */

};


#endif