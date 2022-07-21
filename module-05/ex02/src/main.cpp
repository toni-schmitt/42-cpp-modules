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
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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

void test_shruberry()
{
	const unsigned int sign_grade = 145, exec_grade = 137;
	std::cout << HEADER_START << "Test Shrubbery Creation Form" << HEADER_END;

	std::cout << "Creating ShrubberyCreationForm" << std::endl;

	ShrubberyCreationForm form = ShrubberyCreationForm("home");
	std::cout << form << std::endl;

	std::cout << "Creating two Bueros (one for signing and one for executing)" << std::endl;
	Bureaucrat signer = Bureaucrat("john", sign_grade - 1);
	Bureaucrat executor = Bureaucrat("joe", exec_grade - 1);

	std::cout << "Trying to sign " << form << " with " << signer << std::endl;
	try
	{
		signer.signForm(form);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Trying to execute " << form << " with " << executor << std::endl;
	try
	{
		executor.executeForm(form);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

void test_robot()
{
	const unsigned int sign_grade = 72, exec_grade = 45;
	std::cout << HEADER_START << "Test Shrubbery Creation Form" << HEADER_END;

	std::cout << "Creating RobotomyRequestForm" << std::endl;

	RobotomyRequestForm form = RobotomyRequestForm("blue");
	std::cout << form << std::endl;

	std::cout << "Creating two Bueros (one for signing and one for executing)" << std::endl;
	Bureaucrat signer = Bureaucrat("john", sign_grade - 1);
	Bureaucrat executor = Bureaucrat("joe", exec_grade - 1);

	std::cout << "Trying to sign " << form << " with " << signer << std::endl;
	try
	{
		signer.signForm(form);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Trying to execute " << form << " with " << executor << std::endl;
	try
	{
		executor.executeForm(form);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

void test_presi()
{
	const unsigned int sign_grade = 25, exec_grade = 5;
	std::cout << HEADER_START << "Test Shrubbery Creation Form" << HEADER_END;

	std::cout << "Creating PresidentialPardonForm" << std::endl;

	PresidentialPardonForm form = PresidentialPardonForm("turk");
	std::cout << form << std::endl;

	std::cout << "Creating two Bueros (one for signing and one for executing)" << std::endl;
	Bureaucrat signer = Bureaucrat("john", sign_grade - 1);
	Bureaucrat executor = Bureaucrat("joe", exec_grade - 1);

	std::cout << "Trying to sign " << form << " with " << signer << std::endl;
	try
	{
		signer.signForm(form);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Trying to execute " << form << " with " << executor << std::endl;
	try
	{
		executor.executeForm(form);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

void buero_form()
{
	std::cout << HEADER_START << "Testing Buerocrats with Froms" << HEADER_END;

	test_shruberry();

	test_robot();

	test_presi();
}

int main()
{
	valid_buero();

	invalid_buero();

	buero_form();

	return 0;
}
