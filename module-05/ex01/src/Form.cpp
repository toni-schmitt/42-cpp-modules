/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:07:34 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 17:20:01 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#include <iostream>

/* Constructors */
Form::Form() : _name("undefined"), _isSigned(false), _requiredSignGrade(1), _requiredExecuteGrade(1)
{
	// std::cout << "Form Default Constructor called" << std::endl;
	/*CODE*/
}

Form::Form(const Form &copy) : _name(copy.getName()), _isSigned(copy.getStatus()), _requiredSignGrade(copy.getSignGrade()), _requiredExecuteGrade(copy.getExecuteGrade())
{
	// std::cout << "Form Copy Constructor called" << std::endl;
	/*CODE*/
}

Form::Form(std::string name, unsigned int requredSignGrade, unsigned int requiredExecuteGrade) : _name(name), _requiredSignGrade(requredSignGrade), _requiredExecuteGrade(requiredExecuteGrade)
{
	this->_isSigned = false;
}

/* Deconstructors */
Form::~Form()
{
	// std::cout << "Form Deconstructor called" << std::endl;
	/*CODE*/
}

/* Overloaded Operators */
Form &Form::operator=(const Form &sec)
{
	// std::cout << "Form Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	return *this;
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Form " << form.getName() << " is";
	form.getStatus() ? os << " " : os << " not ";
	os << "signed (Sign Grade: " << form.getSignGrade() << ", Execution Grade: " << form.getExecuteGrade() << ")";
	return os;
}

/* Public Methods */
void Form::beSigned(const Bureaucrat &buero)
{
	// if (buero.getGrade() <= this->getSignGrade())
	if (this->getSignGrade() <= buero.getGrade())
		throw Form::GradeTooLowException();

	this->_isSigned = true;
}

/* Getter */
std::string Form::getName() const
{
	return this->_name;
}

bool Form::getStatus() const
{
	return this->_isSigned;
}

unsigned int Form::getSignGrade() const
{
	return this->_requiredSignGrade;
}

unsigned int Form::getExecuteGrade() const
{
	return this->_requiredExecuteGrade;
}

/* Setter */
