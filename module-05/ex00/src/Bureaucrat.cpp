/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:47:27 by tschmitt          #+#    #+#             */
/*   Updated: 2022/01/31 19:00:54 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

/* Constructors */
Bureaucrat::Bureaucrat()
{
	this->setGrade(150);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	try
	{
		this->setGrade(copy.getGrade());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(std::string name)
{
	this->setGrade(150);
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
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return *this;
}

/* Public Methods */
void Bureaucrat::incrementGrade()
{
	try
	{
		this->setGrade(this->getGrade() + 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

/* Getter */
const std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

/* Setter */
void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		return ;
	if (grade > 150)
		return ;
	this->_grade = grade;
}

