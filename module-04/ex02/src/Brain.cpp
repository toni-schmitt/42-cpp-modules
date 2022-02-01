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
	for (size_t i = 0; i < sizeof(this->_ideas) / sizeof(this->_ideas[0]) && i < sizeof(copy._ideas) / sizeof(copy._ideas); i++)
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
	for (size_t i = 0; i < sizeof(this->_ideas) / sizeof(this->_ideas[0]) && i < sizeof(sec._ideas) / sizeof(sec._ideas); i++)
	{
		this->_ideas[i] = sec._ideas[i];
	}
	return *this;
}

/* Public Methods */

/* Getter */

/* Setter */

