/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:27:03 by toni              #+#    #+#             */
/*   Updated: 2022/01/26 12:09:33 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>
#include <map>

class Harl
{
private:

	void debug();
	void info();
	void warning();
	void error();

public:
	void complain(std::string error_level);

	Harl() {};
	~Harl() {};
};

#endif