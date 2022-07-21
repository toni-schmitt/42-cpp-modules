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

#define HEADER_START "\n\n-- "
#define HEADER_END " --\n\n"

const unsigned int highes_grade = 1, lowest_grade = 150;

void valid_buero()
{
	std::cout << HEADER_START << "Testing a valid Bureaucrat" << HEADER_END;
	{
		std::cout << "Creating John with the default grade (150)" << std::endl;

		Bureaucrat john = Bureaucrat("john");
		std::cout << john << std::endl;

		std::cout << "Setting Grade of john to highest Grade (" << highes_grade << ")" << std::endl;
		try
		{
			john.setGrade(highes_grade);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << "Setting Grade of john to lowest Grade (" << lowest_grade << ")" << std::endl;
		try
		{
			john.setGrade(lowest_grade);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

void invalid_buero()
{

	std::cout << HEADER_START << "Testing Exceptions (invalid Grades / Bueraucrat)" << HEADER_END;
	{
		std::cout << HEADER_START << "Testing Exception in Constructor" << std::endl;
		{
			const unsigned int invalid_grade = 3000;
			std::cout << "Creating John with an invalid Grade (" << invalid_grade << ")" << std::endl;
			try
			{
				Bureaucrat john = Bureaucrat("john", invalid_grade);
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		std::cout << HEADER_START << "Testing Exception in setGrade" << std::endl;
		{
			const unsigned int valid_grade = 30;
			std::cout << "Creating John with a valid Grade (" << valid_grade << ")" << std::endl;

			Bureaucrat john = Bureaucrat("john", valid_grade);
			std::cout << john << std::endl;

			const unsigned int invalid_grade = 500;
			std::cout << "Setting Grade of John to an invalid Grade (" << invalid_grade << ")" << std::endl;
			try
			{
				john.setGrade(invalid_grade);
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		std::cout << HEADER_START << "Testing Exception in incrementGrade" << std::endl;
		{
			std::cout << "Creating john with the highest possibel Grade (" << highes_grade << ")" << std::endl;
			Bureaucrat john = Bureaucrat("john", highes_grade);

			std::cout << "Incrementing Grade to " << highes_grade - 1 << " should thwor exception" << std::endl;
			try
			{
				john.incrementGrade();
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		std::cout << HEADER_START << "Testing Exception in decrementGrade" << std::endl;
		{
			std::cout << "Creating John with the lowest possible Grade (" << lowest_grade << ")" << std::endl;
			Bureaucrat john = Bureaucrat("john", lowest_grade);

			std::cout << "Decrementing Grade to " << lowest_grade + 1 << " should throw exception" << std::endl;
			try
			{
				john.decrementGrade();
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n';
			}
		}
	}
}

int main()
{

	valid_buero();

	invalid_buero();

	return 0;
}
