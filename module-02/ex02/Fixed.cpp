/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:00:19 by toni              #+#    #+#             */
/*   Updated: 2022/01/22 18:56:34 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = (value << Fixed::_noFractionalBits);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(value * (1 << Fixed::_noFractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointValue = fixed.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

bool operator==(const Fixed &fixed1, const Fixed &fixed2)
{
	return fixed1.getRawBits() == fixed2.getRawBits();
}

bool operator!=(const Fixed &fixed1, const Fixed &fixed2)
{
	return fixed1.getRawBits() != fixed2.getRawBits();
}

bool operator<(const Fixed &fixed1, const Fixed &fixed2)
{
	return fixed1.getRawBits() < fixed2.getRawBits();
}

bool operator>(const Fixed &fixed1, const Fixed &fixed2)
{
	return fixed1.getRawBits() > fixed2.getRawBits();
}

bool operator<=(const Fixed &fixed1, const Fixed &fixed2)
{
	return fixed1.getRawBits() <= fixed2.getRawBits();
}

bool operator>=(const Fixed &fixed1, const Fixed &fixed2)
{
	return fixed1.getRawBits() >= fixed2.getRawBits();
}

Fixed operator+(const Fixed &fixed1, const Fixed &fixed2)
{
	Fixed retval(0);

	retval.setRawBits(fixed1.getRawBits() + fixed2.getRawBits());
	return retval;
}

Fixed operator-(const Fixed &fixed1, const Fixed &fixed2)
{
	Fixed retval(0);

	retval.setRawBits(fixed1.getRawBits() - fixed2.getRawBits());
	return retval;
}

Fixed operator*(const Fixed &fixed1, const Fixed &fixed2)
{
	Fixed retval(0);

	retval.setRawBits(fixed1.getRawBits() * fixed2.getRawBits());
	return retval;
}

Fixed operator/(const Fixed &fixed1, const Fixed &fixed2)
{
	Fixed retval(0);

	retval.setRawBits(fixed1.getRawBits() / fixed2.getRawBits());
	return retval;
}

Fixed Fixed::operator++()
{
	this->_fixedPointValue++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	++this->_fixedPointValue;
	return *this;
}

Fixed Fixed::operator--()
{
	this->_fixedPointValue--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	--this->_fixedPointValue;
	return *this;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = fixed.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return out;
}

float Fixed::toFloat() const
{
	return (float)this->_fixedPointValue / (float)(1 << Fixed::_noFractionalBits);
}

int Fixed::toInt() const
{
	return this->_fixedPointValue >> Fixed::_noFractionalBits;
}

int Fixed::getRawBits() const
{
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}
