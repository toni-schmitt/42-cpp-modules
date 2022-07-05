/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:58:34 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 15:20:46 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___WRONGANIMAL_HPP___)
#define ___WRONGANIMAL_HPP___

#include <string>

class AWrongAnimal
{
private:
	/* Private Members */
protected:
	/* Protected Members */
	std::string _type;
public:
	/* Constructors */
	/* Deconstructors */
	virtual ~AWrongAnimal() = 0;

	/* Overloaded Operators */

	/* Public Methods */
	virtual void makeSound() const = 0;

	/* Getter */
	virtual std::string getType() const = 0;

	/* Setter */

};


#endif