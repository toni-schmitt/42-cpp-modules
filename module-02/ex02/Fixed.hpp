/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:00:26 by toni              #+#    #+#             */
/*   Updated: 2022/01/22 18:58:33 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _fixedPointValue;
	static const int _noFractionalBits = 8;

public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &fixed);
	~Fixed();

	friend bool operator==(const Fixed &fixed1, const Fixed &fixed2);
	friend bool operator!=(const Fixed &fixed1, const Fixed &fixed2);

	friend bool operator<(const Fixed &fixed1, const Fixed &fixed2);
	friend bool operator>(const Fixed &fixed1, const Fixed &fixed2);

	friend bool operator<=(const Fixed &fixed1, const Fixed &fixed2);
	friend bool operator>=(const Fixed &fixed1, const Fixed &fixed2);

	friend Fixed operator+(const Fixed &fixed1, const Fixed &fixed2);
	friend Fixed operator-(const Fixed &fixed1, const Fixed &fixed2);

	friend Fixed operator*(const Fixed &fixed1, const Fixed &fixed2);
	friend Fixed operator/(const Fixed &fixed1, const Fixed &fixed2);

	Fixed operator++();
	Fixed operator++(int);

	Fixed operator--();
	Fixed operator--(int);
	
	Fixed &operator=(const Fixed &fixed);
	friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

	float toFloat() const;
	int toInt() const;

	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif