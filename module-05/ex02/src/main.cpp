/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:15:46 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 17:20:21 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

int main()
{
	Bureaucrat ben("ben");

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

	AForm form42("AForm 42", 3, 2);

	ben.signForm(form42);

	Bureaucrat john("john");
	john.setGrade(1);
	john.signForm(form42);

	return 0;
}
