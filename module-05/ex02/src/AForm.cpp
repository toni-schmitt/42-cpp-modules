/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:07:34 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 17:20:01 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#include <iostream>

/* Constructors */
AForm::AForm() : _name("undefined"), _isSigned(false), _requiredSignGrade(1), _requiredExecuteGrade(1)
{
	// std::cout << "AForm Default Constructor called" << std::endl;
	/*CODE*/
}

AForm::AForm(const AForm &copy) : _name(copy.getName()), _isSigned(copy.getStatus()), _requiredSignGrade(copy.getSignGrade()), _requiredExecuteGrade(copy.getExecuteGrade())
{
	// std::cout << "AForm Copy Constructor called" << std::endl;
	/*CODE*/
}

AForm::AForm(std::string name, unsigned int requredSignGrade, unsigned int requiredExecuteGrade) : _name(name), _requiredSignGrade(requredSignGrade), _requiredExecuteGrade(requiredExecuteGrade)
{
	this->_isSigned = false;
}

/* Deconstructors */
AForm::~AForm()
{
	// std::cout << "AForm Deconstructor called" << std::endl;
	/*CODE*/
}

/* Overloaded Operators */
AForm &AForm::operator=(const AForm &sec)
{
	// std::cout << "AForm Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	return *this;
}

/* Public Methods */
void AForm::beSigned(Bureaucrat buero)
{
	// if (buero.getGrade() <= this->getSignGrade())
	if (this->getSignGrade() <= buero.getGrade())
		throw AForm::GradeTooLowException();

	this->_isSigned = true;
}

/* Getter */
std::string AForm::getName() const
{
	return this->_name;
}

bool AForm::getStatus() const
{
	return this->_isSigned;
}

unsigned int AForm::getSignGrade() const
{
	return this->_requiredSignGrade;
}

unsigned int AForm::getExecuteGrade() const
{
	return this->_requiredExecuteGrade;
}

/* Setter */
