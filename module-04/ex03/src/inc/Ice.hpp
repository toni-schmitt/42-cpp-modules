/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:29:09 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 13:27:23 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___ICE_HPP___)
#define ___ICE_HPP___

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	/* Private Members */
public:
	/* Constructors */
	Ice();
	Ice(const Ice& copy);
	Ice(const std::string &type);
	/* Deconstructors */
	~Ice();

	/* Overloaded Operators */
	Ice &operator=(const Ice &sec);

	/* Public Methods */
	AMateria *clone() const;
	void use(ICharacter &target);

	/* Getter */
	const std::string &getType() const;

	/* Setter */

};


#endif