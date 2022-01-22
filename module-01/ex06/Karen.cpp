/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:28:38 by toni              #+#    #+#             */
/*   Updated: 2022/01/22 01:12:18 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

#include <iostream>
#include <functional>
#include <map>

void Karen::debug()
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info()
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don\'t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning()
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error()
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string error_level)
{
	std::map<std::string, void (Karen::*)()> func_map;
	func_map["debug"] = &Karen::debug;
	func_map["info"] = &Karen::info;
	func_map["warning"] = &Karen::warning;
	func_map["error"] = &Karen::error;

	// auto func = func_map[error_level];
	if (func_map[error_level] == NULL)
	{
		std::cout << error_level << " not found" << std::endl;
		return;
	}

	int level;
	try
	{
		level = _log_level_map.at(error_level);
	}
	catch(const std::out_of_range &oor)
	{
		return;
	}
	
	if (this->_minLogLevel == e_invalid_level)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return;
	}

	if (level >= _minLogLevel)
		(*this.*(func_map[error_level]))();
}

void Karen::setMinLogLevel(std::string min_log_level)
{
	int min_level;
	try
	{
		min_level = _log_level_map.at(min_log_level);
	}
	catch (const std::out_of_range &oor)
	{
		min_level = e_invalid_level;
	}

	this->_minLogLevel = min_level;
}