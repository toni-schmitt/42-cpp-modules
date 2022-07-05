/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:06:37 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 15:07:01 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___WRONGDOG_HPP___)
#define ___WRONGDOG_HPP___

#include "WrongAnimal.hpp"

class WrongDog : public AWrongAnimal
{
private:
	/* Private Members */
public:
	/* Constructors */
	WrongDog();
	WrongDog(const WrongDog& copy);
	/* Deconstructors */
	~WrongDog();

	/* Overloaded Operators */
	WrongDog &operator=(const WrongDog &sec);

	/* Public Methods */
	void makeSound() const;

	/* Getter */
	std::string getType() const;

	/* Setter */

};


#endif