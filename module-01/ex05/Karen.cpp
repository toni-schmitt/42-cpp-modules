/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:28:38 by toni              #+#    #+#             */
/*   Updated: 2022/01/26 12:07:32 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

#include <iostream>
#include <functional>
#include <map>

void Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don\'t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string error_level)
{
	static std::string complain_level[] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	void (Karen::*function[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	for (int i = 0; i < 4; i++)
	{
		if (complain_level[i] == error_level)
		{
			(this->*function[i])();
			return;
		}
	}
	std::cout << "Error level not found" << std::endl;
	
}