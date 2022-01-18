/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:29:29 by toni              #+#    #+#             */
/*   Updated: 2022/01/18 20:58:32 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

#include <iostream>


int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cout << "Please provide the log level you want to listen to" << std::endl;
		return 1;
	}

	Karen karen;

	karen.setMinLogLevel(argv[1]);

	karen.complain("info");
	karen.complain("debug");
	karen.complain("warning");
	karen.complain("error");
	karen.complain("info");
	karen.complain("debug");
	karen.complain("warning");
	karen.complain("error");
	karen.complain("info");
	std::cout << "Will not find \"not_found\"" << std::endl;
	karen.complain("not_found");
	karen.complain("error");
	
	return 0;
}
