/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:27:03 by toni              #+#    #+#             */
/*   Updated: 2022/01/16 01:07:17 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
private:
	void debug();
	void info();
	void warning();
	void error();
public:
	void complain(std::string error_level);

	Harl() { }
	~Harl() { }
};

#endif