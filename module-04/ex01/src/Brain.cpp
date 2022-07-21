/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:36:09 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 15:42:41 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>

/* Constructors */
Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	for (size_t i = 0; i < this->MaxIdeas; i++)
	{
		this->_ideas[i] = copy._ideas[i];
	}
}

/* Deconstructors */
Brain::~Brain()
{
	std::cout << "Brain Deconstructor called" << std::endl;
}

/* Overloaded Operators */
Brain &Brain::operator=(const Brain &sec)
{
	std::cout << "Brain Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;
	for (size_t i = 0; i < this->MaxIdeas; i++)
	{
		this->_ideas[i] = sec._ideas[i];
	}
	return *this;
}

/* Public Methods */
void Brain::addIdea(std::string idea)
{
	static unsigned int index = 0;

	if (index < 0 || index >= MaxIdeas)
		return;

	this->_ideas[index] = idea;

	++index;
}

void Brain::removeIdea(std::string idea)
{
	for (unsigned int i = 0; i < MaxIdeas; ++i)
	{
		if (this->_ideas[i] == idea)
		{
			this->_ideas[i] = "";
			return;
		}
	}
}

/* Getter */
std::string Brain::getIdea(unsigned int index)
{
	if (index < 0 || index > this->MaxIdeas)
		return "";
	return this->_ideas[index];
}

/* Setter */

