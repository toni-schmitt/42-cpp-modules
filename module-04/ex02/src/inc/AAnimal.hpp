/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:46:44 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 17:35:46 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___ANIMAL_HPP___)
#define ___ANIMAL_HPP___

#include <string>

class AAnimal
{
private:
	/* Private Members */

protected:
	/* Protected Members */
	std::string _type;

public:
	/* Constructors */

	/* Deconstructors */
	virtual ~AAnimal() = 0;

	/* Overloaded Operators */

	/* Public Methods */
	virtual void makeSound() const = 0;

	/* Getter */
	virtual std::string getType() const = 0;

	/* Setter */

};


#endif