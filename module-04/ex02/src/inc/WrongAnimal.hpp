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

class WrongAnimal
{
private:
	/* Private Members */
protected:
	/* Protected Members */
	std::string _type;
public:
	/* Constructors */
	WrongAnimal();
	WrongAnimal(const WrongAnimal& copy);
	/* Deconstructors */
	virtual ~WrongAnimal();

	/* Overloaded Operators */
	WrongAnimal &operator=(const WrongAnimal &sec);

	/* Public Methods */
	virtual void makeSound() const;

	/* Getter */
	std::string getType() const;

	/* Setter */

};


#endif