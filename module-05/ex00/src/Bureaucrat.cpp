/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:47:27 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 14:59:30 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

/* Constructors */
Bureaucrat::Bureaucrat() : _name("undefined")
{
	try
	{
		this->setGrade(150);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade) : _name(name)
{
	try
	{
		this->setGrade(grade);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName())
{
	try
	{
		this->setGrade(copy.getGrade());
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

/* Deconstructors */
Bureaucrat::~Bureaucrat()
{
	/*CODE*/
}

/* Overloaded Operators */
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &sec)
{
	if (this == &sec)
		return *this;

	try
	{
		this->setGrade(sec.getGrade());
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return *this;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat buer)
{
	os << buer.getName() << ", bureaucrat grade " << buer.getGrade();
	return os;
}

/* Public Methods */
void Bureaucrat::incrementGrade()
{
	try
	{
		this->setGrade(this->getGrade() - 1);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade()
{
	try
	{
		this->setGrade(this->getGrade() + 1);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}	
}

/* Getter */
std::string Bureaucrat::getName() const
{
	return this->_name;
}

unsigned int Bureaucrat::getGrade() const
{
	return this->_grade;
}

/* Setter */
void Bureaucrat::setGrade(unsigned int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

