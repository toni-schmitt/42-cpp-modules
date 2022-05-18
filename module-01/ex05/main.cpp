/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:28:10 by toni              #+#    #+#             */
/*   Updated: 2022/01/16 01:11:56 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

int main(void)
{
	Harl harl;
	
	harl.complain("info");
	harl.complain("debug");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("info");
	harl.complain("debug");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("info");
	std::cout << "Will not find \"not_found\"" << std::endl;
	harl.complain("not_found");
	harl.complain("error");

	return 0;
}
