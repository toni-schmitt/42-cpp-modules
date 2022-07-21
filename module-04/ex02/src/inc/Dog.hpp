/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:55:54 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 15:37:40 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___DOG_HPP___)
#define ___DOG_HPP___

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
	/* Private Members */
	Brain *_pBrain;
public:
	/* Constructors */
	Dog();
	Dog(const Dog& copy);
	/* Deconstructors */
	~Dog();

	/* Overloaded Operators */
	Dog &operator=(const Dog &sec);

	/* Public Methods */
	void makeSound() const;
	void haveIdea(std::string idea);
	void looseIdea(std::string idea);

	/* Getter */
	std::string getType() const;

	/* Setter */

};


#endif