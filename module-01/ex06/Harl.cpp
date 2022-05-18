/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:28:38 by toni              #+#    #+#             */
/*   Updated: 2022/01/26 12:08:25 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>
#include <functional>
#include <map>

void Harl::debug()
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Harl::info()
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don\'t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::warning()
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming here for years and you just started working here last month." << std::endl;
}

void Harl::error()
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string error_level)
{
	static std::string complain_level[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"};

	int level = -1;

	for (int i = 0; i < 4; i++)
	{
		if (error_level == complain_level[i])
		{
			level = i;
			break;
		}
	}

	switch (level)
	{
	case 0:
		this->debug();
		this->info();
		this->warning();
		this->error();
		break;
	case 1:
		this->info();
		this->warning();
		this->error();
		break;
	case 2:
		this->warning();
		this->error();
		break;
	case 3:
		this->error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
