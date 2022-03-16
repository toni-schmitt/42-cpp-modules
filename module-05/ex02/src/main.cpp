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
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

void test_presidentail_pardon()
{
	std::cout << "Create Valid Presidential Pardon Form" << std::endl;
	PresidentialPardonForm valid_form("rick");


	std::cout << "Create valid Signer and Executor for Presidential Pardon Form" << std::endl;
	Bureaucrat valid_singer("Valid Signer", 25);
	Bureaucrat valid_executor("Valid Executor", 5);
	std::cout << valid_singer << std::endl << valid_executor << std::endl;

	std::cout << "\nAttempt to sign and execute form with valid Bureaucrat\n" << std::endl;
	valid_singer.signForm(valid_form);
	valid_executor.executeForm(valid_form);

	std::cout << "\nCreate Invalid Presidential Pardon Form" << std::endl;
	PresidentialPardonForm invalid_form("rick2");

	std::cout << "Create invalid Signer and Executor for Presidential Pardon From" << std::endl;
	Bureaucrat invlaid_signer("Invalid Signer", 26);
	Bureaucrat invalid_executor("Invalid Executor", 6);
	std::cout << invlaid_signer << std::endl << invalid_executor << std::endl;

	std::cout << "\nAttempt to sign and execute form with invalid Buerocrats\n" << std::endl;
	invlaid_signer.signForm(invalid_form);
	invalid_executor.executeForm(invalid_form);

	std::cout << "\nAttempt to execute unsigned Form with valid Buerocrat\n" << std::endl;
	valid_executor.executeForm(invalid_form);
	
}

void test_robotomy()
{
	std::cout << "Create Valid Presidential Pardon Form" << std::endl;
	RobotomyRequestForm valid_form("john");


	std::cout << "Create valid Signer and Executor for Presidential Pardon Form" << std::endl;
	Bureaucrat valid_singer("Valid Signer", 72);
	Bureaucrat valid_executor("Valid Executor", 45);
	std::cout << valid_singer << std::endl << valid_executor << std::endl;

	std::cout << "\nAttempt to sign and execute form with valid Bureaucrat\n" << std::endl;
	valid_singer.signForm(valid_form);
	valid_executor.executeForm(valid_form);

	std::cout << "\nCreate Invalid Presidential Pardon Form" << std::endl;
	RobotomyRequestForm invalid_form("john2");

	std::cout << "Create invalid Signer and Executor for Presidential Pardon From" << std::endl;
	Bureaucrat invlaid_signer("Invalid Signer", 73);
	Bureaucrat invalid_executor("Invalid Executor", 46);
	std::cout << invlaid_signer << std::endl << invalid_executor << std::endl;

	std::cout << "\nAttempt to sign and execute form with invalid Buerocrats\n" << std::endl;
	invlaid_signer.signForm(invalid_form);
	invalid_executor.executeForm(invalid_form);

	std::cout << "\nAttempt to execute unsigned Form with valid Buerocrat\n" << std::endl;
	valid_executor.executeForm(invalid_form);
	
}

void test_shrubbery()
{
	std::cout << "Create Valid Presidential Pardon Form" << std::endl;
	ShrubberyCreationForm valid_form("home");


	std::cout << "Create valid Signer and Executor for Presidential Pardon Form" << std::endl;
	Bureaucrat valid_singer("Valid Signer", 145);
	Bureaucrat valid_executor("Valid Executor", 137);
	std::cout << valid_singer << std::endl << valid_executor << std::endl;

	std::cout << "\nAttempt to sign and execute form with valid Bureaucrat\n" << std::endl;
	valid_singer.signForm(valid_form);
	valid_executor.executeForm(valid_form);

	std::cout << "\nCreate Invalid Presidential Pardon Form" << std::endl;
	ShrubberyCreationForm invalid_form("home2");

	std::cout << "Create invalid Signer and Executor for Presidential Pardon From" << std::endl;
	Bureaucrat invlaid_signer("Invalid Signer", 146);
	Bureaucrat invalid_executor("Invalid Executor", 138);
	std::cout << invlaid_signer << std::endl << invalid_executor << std::endl;

	std::cout << "\nAttempt to sign and execute form with invalid Buerocrats\n" << std::endl;
	invlaid_signer.signForm(invalid_form);
	invalid_executor.executeForm(invalid_form);

	std::cout << "\nAttempt to execute unsigned Form with valid Buerocrat\n" << std::endl;
	valid_executor.executeForm(invalid_form);
	
}

int main()
{
	std::cout << "\n\nTesting Shrubbery Creation Form\n\n" << std::endl;
	test_shrubbery();
	std::cout << "\n\nTesting Robotomy Request Form\n\n" << std::endl;
	test_robotomy();
	std::cout << "\n\nTesting Presidentail Pardon Form\n\n" << std::endl;
	test_presidentail_pardon();
}
