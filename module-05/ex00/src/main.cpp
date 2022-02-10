/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:15:46 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 15:00:16 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

int main()
{
	Bureaucrat ben;

	std::cout << ben << std::endl;

	ben.incrementGrade();
	std::cout << ben << std::endl;
	ben.incrementGrade();
	std::cout << ben << std::endl;
	ben.incrementGrade();
	std::cout << ben << std::endl;
	ben.incrementGrade();
	std::cout << ben << std::endl;
	ben.incrementGrade();
	std::cout << ben << std::endl;
	ben.incrementGrade();
	std::cout << ben << std::endl;
	ben.incrementGrade();
	std::cout << ben << std::endl;
	ben.incrementGrade();
	std::cout << ben << std::endl;
	ben.decrementGrade();
	std::cout << ben << std::endl;

	try
	{
		ben.setGrade(170);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}	
	std::cout << ben << std::endl;
	return 0;
}
