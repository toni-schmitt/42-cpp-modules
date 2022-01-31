/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:00:26 by toni              #+#    #+#             */
/*   Updated: 2022/01/31 15:20:29 by tschmitt         ###   ########.fr       */
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
	~Fixed();
	Fixed & operator = (const Fixed &fixed);

	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif