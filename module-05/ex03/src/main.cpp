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
#include "Intern.hpp"

#include <iostream>

#include <iostream>

void test_presidentail_pardon(AForm &valid_form, AForm &invalid_form)
{


	std::cout << "Create valid Signer and Executor for Presidential Pardon Form" << std::endl;
	Bureaucrat valid_singer("Valid Signer", 25);
	Bureaucrat valid_executor("Valid Executor", 5);
	std::cout << valid_singer << std::endl << valid_executor << std::endl;

	std::cout << "\nAttempt to sign and execute form with valid Bureaucrat\n" << std::endl;
	valid_singer.signForm(valid_form);
	valid_executor.executeForm(valid_form);


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

void test_robotomy(AForm &valid_form, AForm &invalid_form)
{


	std::cout << "Create valid Signer and Executor for Presidential Pardon Form" << std::endl;
	Bureaucrat valid_singer("Valid Signer", 72);
	Bureaucrat valid_executor("Valid Executor", 45);
	std::cout << valid_singer << std::endl << valid_executor << std::endl;

	std::cout << "\nAttempt to sign and execute form with valid Bureaucrat\n" << std::endl;
	valid_singer.signForm(valid_form);
	valid_executor.executeForm(valid_form);


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

void test_shrubbery(AForm &valid_form, AForm &invalid_form)
{

	std::cout << "Create valid Signer and Executor for Presidential Pardon Form" << std::endl;
	Bureaucrat valid_singer("Valid Signer", 145);
	Bureaucrat valid_executor("Valid Executor", 137);
	std::cout << valid_singer << std::endl << valid_executor << std::endl;

	std::cout << "\nAttempt to sign and execute form with valid Bureaucrat\n" << std::endl;
	valid_singer.signForm(valid_form);
	valid_executor.executeForm(valid_form);

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
	Intern intern;
	AForm *valid_tmp;
	AForm *invalid_tmp;

	std::cout << "\n\nTest Intern and Shrubbery Creation Form\n\n" << std::endl;
	std::cout << "Let Intern create Valid ShrubberyCreationForm" << std::endl;
	valid_tmp = intern.makeForm("ShrubberyCreation", "home");
	std::cout << "Let Intern create Invalid ShrubberyCreationForm" << std::endl;
	invalid_tmp = intern.makeForm("ShrubberyCreation", "invalid_home");
	std::cout << "Test ShrubberyCreationForm with Froms created by Intern" << std::endl;
	test_shrubbery(*valid_tmp, *invalid_tmp);
	delete valid_tmp;
	delete invalid_tmp;

	std::cout << "\n\nTest Intern and RobotomyRequestForm\n\n" << std::endl;
	std::cout << "Let Intern create Valid RobotomyRequestForm" << std::endl;
	valid_tmp = intern.makeForm("RobotomyRequest", "home");
	std::cout << "Let Intern create Invalid RobotomyRequestForm" << std::endl;
	invalid_tmp = intern.makeForm("RobotomyRequest", "invalid_home");
	std::cout << "Test RobotomyRequestForm with Froms created by Intern" << std::endl;
	test_robotomy(*valid_tmp, *invalid_tmp);
	delete valid_tmp;
	delete invalid_tmp;

	std::cout << "\n\nTest Intern and PresidentialPardonForm\n\n" << std::endl;
	std::cout << "Let Intern create Valid PresidentialPardonForm" << std::endl;
	valid_tmp = intern.makeForm("PresidentialPardon", "home");
	std::cout << "Let Intern create Invalid PresidentialPardonForm" << std::endl;
	invalid_tmp = intern.makeForm("PresidentialPardon", "invalid_home");
	std::cout << "Test PresidentialPardonForm with Froms created by Intern" << std::endl;
	test_presidentail_pardon(*valid_tmp, *invalid_tmp);
	delete valid_tmp;
	delete invalid_tmp;


	std::cout << "\n\nTest Intern and an Invalid Form\n\n" << std::endl;
	std::cout << "Let Intern create Valid non existent Form" << std::endl;
	valid_tmp = intern.makeForm("non-existens", "home");
	if (valid_tmp == NULL)
		std::cout << "Intern created an non existent Form" << std::endl;
}