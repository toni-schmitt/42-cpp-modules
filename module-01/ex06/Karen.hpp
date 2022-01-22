/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:27:03 by toni              #+#    #+#             */
/*   Updated: 2022/01/22 01:11:26 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>
#include <map>

class Karen
{
private:
	enum _logLevels
	{
		e_debug,
		e_info,
		e_warning,
		e_error,
		e_invalid_level = -1
	};
	int _minLogLevel;
	std::map<std::string, int> _log_level_map;

	void debug();
	void info();
	void warning();
	void error();

public:
	void complain(std::string error_level);
	void setMinLogLevel(std::string min_log_level);

	Karen()
	{
		this->_log_level_map["debug"] = 0;
		this->_log_level_map["info"] = 1;
		this->_log_level_map["warning"] = 2;
		this->_log_level_map["error"] = 3;
	}
	~Karen() {}
};

#endif