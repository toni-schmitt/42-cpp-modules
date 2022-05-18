/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:29:29 by toni              #+#    #+#             */
/*   Updated: 2022/01/26 12:09:20 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage:" << std::endl
			<< "\t" << argv[0] << " \"LogLevel\"" << std::endl;
		return 1;
	}

	std::string log_lvl = argv[1];

	Harl harl;

	harl.complain(log_lvl);
	
	return 0;
}
