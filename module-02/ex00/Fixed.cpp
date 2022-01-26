/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:00:19 by toni              #+#    #+#             */
/*   Updated: 2022/01/26 12:11:59 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	this->_fixedPointValue = fixed._fixedPointValue;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	this->_fixedPointValue = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}
