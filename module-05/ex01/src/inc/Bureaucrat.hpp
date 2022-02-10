/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:15:32 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 17:18:21 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___BUREAUCRAT_HPP___)
#define ___BUREAUCRAT_HPP___

#include "Form.hpp"
class Form;
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	/* Private Members */
	const std::string _name;
	unsigned int _grade;

public:
	/* Constructors */
	Bureaucrat();
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat(const std::string name);
	/* Deconstructors */
	~Bureaucrat();

	/* Overloaded Operators */
	Bureaucrat &operator=(const Bureaucrat &sec);

	/* Public Methods */
	void incrementGrade();
	void decrementGrade();
	void signForm(Form form);

	/* Getter */
	std::string getName() const;
	unsigned int getGrade() const;

	/* Setter */
	void setGrade(unsigned int grade);

	/* Exceptions */
	struct GradeTooLowException : public std::exception
	{
		const char *what() const throw()
		{
			return "GradeTooLowExcepiton";
		}	
	};

	struct GradeTooHighException : public std::exception
	{
		const char *what() const throw()
		{
			return "GradeTooHighException";
		}
	};
	
};

std::ostream &operator<<(std::ostream &os, Bureaucrat buer);

#endif