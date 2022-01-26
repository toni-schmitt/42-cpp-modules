/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:00:26 by toni              #+#    #+#             */
/*   Updated: 2022/01/26 12:12:43 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

class Fixed
{
private:
	int _fixedPointValue;
	static const int _noFractionalBits = 8;

public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed() {};
	Fixed & operator = (const Fixed &fixed);

	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif