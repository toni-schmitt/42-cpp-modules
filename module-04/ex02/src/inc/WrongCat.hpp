/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:05:06 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 15:05:57 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___WRONGCAT_HPP___)
#define ___WRONGCAT_HPP___

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	/* Private Members */
public:
	/* Constructors */
	WrongCat();
	WrongCat(const WrongCat& copy);
	/* Deconstructors */
	~WrongCat();

	/* Overloaded Operators */
	WrongCat &operator=(const WrongCat &sec);

	/* Public Methods */
	void makeSound() const;

	/* Getter */

	/* Setter */

};


#endif