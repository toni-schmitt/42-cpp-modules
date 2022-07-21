/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:31:53 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 15:37:34 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___Brain_HPP___)
#define ___Brain_HPP___

#include <string>

class Brain
{
private:
	/* Private Members */
	static const unsigned int MaxIdeas = 100;
	std::string _ideas[MaxIdeas];
public:
	/* Constructors */
	Brain();
	Brain(const Brain& copy);
	/* Deconstructors */
	~Brain();

	/* Overloaded Operators */
	Brain &operator=(const Brain &sec);

	/* Public Methods */
	void addIdea(std::string idea);
	void removeIdea(std::string idea);

	/* Getter */
	std::string getIdea(unsigned int index);

	/* Setter */

};


#endif