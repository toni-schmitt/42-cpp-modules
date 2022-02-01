/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:46:44 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 15:20:50 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___ANIMAL_HPP___)
#define ___ANIMAL_HPP___

#include <string>

class Animal
{
private:
	/* Private Members */

protected:
	/* Protected Members */
	std::string _type;

public:
	/* Constructors */
	Animal();
	Animal(const Animal& copy);
	/* Deconstructors */
	virtual ~Animal();

	/* Overloaded Operators */
	Animal &operator=(const Animal &sec);

	/* Public Methods */
	virtual void makeSound() const;

	/* Getter */
	std::string getType() const;

	/* Setter */

};


#endif