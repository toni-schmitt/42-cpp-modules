/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:00:19 by toni              #+#    #+#             */
/*   Updated: 2022/01/31 15:20:26 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

/* Constructors */
Fixed::Fixed()
{
	std::cout << "Default Constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	this->_fixedPointValue = copy._fixedPointValue;
}

/* Deconstructors */
Fixed::~Fixed()
{
	std::cout << "Deconstructor called" << std::endl;
}

/* Overloaded Operators */
Fixed &Fixed::operator=(const Fixed &sec)
{
	std::cout << "Default Constructor called" << std::endl;
	if (this == &sec)
		return *this;

	return *this;
}

/* Public Methods */

int Fixed::getRawBits() const
{
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}
