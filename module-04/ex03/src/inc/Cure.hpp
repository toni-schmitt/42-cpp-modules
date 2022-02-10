/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:16:41 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 13:17:51 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___CURE_HPP___)
#define ___CURE_HPP___

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	/* Private Members */
public:
	/* Constructors */
	Cure();
	Cure(const Cure& copy);
	Cure(const std::string &type);
	/* Deconstructors */
	~Cure();

	/* Overloaded Operators */
	Cure &operator=(const Cure &sec);

	/* Public Methods */
	AMateria *clone() const;
	void use(ICharacter &target);

	/* Getter */
	const std::string &getType() const;

	/* Setter */

};


#endif