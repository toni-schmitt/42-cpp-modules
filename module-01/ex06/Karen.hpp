/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:27:03 by toni              #+#    #+#             */
/*   Updated: 2022/01/18 20:52:01 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>
#include <map>

class Karen
{
private:

	enum _logLevels { e_debug, e_info, e_warning, e_error, e_invalid_level = -1 };
	int _minLogLevel;
	const std::map<std::string, int> _log_level_map = {
		{"debug", 0},
		{"info", 1},
		{"warning", 2},
		{"error", 3}
	};

	void debug();
	void info();
	void warning();
	void error();
public:
	void complain(std::string error_level);
	void setMinLogLevel(std::string min_log_level);

	Karen() { }
	~Karen() { }
};

#endif