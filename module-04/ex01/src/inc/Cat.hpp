/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:56:36 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 15:37:37 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___CAT_HPP___)
#define ___CAT_HPP___

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	/* Private Members */
	Brain *_pBrain;
public:
	/* Constructors */
	Cat();
	Cat(const Cat& copy);
	/* Deconstructors */
	~Cat();

	/* Overloaded Operators */
	Cat &operator=(const Cat &sec);

	/* Public Methods */
	void makeSound() const;
	void haveIdea(std::string idea);
	void looseIdea(std::string idea);

	/* Getter */

	/* Setter */

};


#endif