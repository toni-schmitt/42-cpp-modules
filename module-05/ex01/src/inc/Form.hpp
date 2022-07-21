/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:07:40 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 15:27:13 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___FORM_HPP___)
#define ___FORM_HPP___

#include "Bureaucrat.hpp"
class Bureaucrat;
#include <string>
#include <exception>

class Form
{
private:
	/* Private Members */
	const std::string _name;
	bool _isSigned;
	const unsigned int _requiredSignGrade;
	const unsigned int _requiredExecuteGrade;

public:
	/* Constructors */
	Form();
	Form(const Form &copy);
	Form(std::string name, unsigned int requredSignGrade, unsigned int requiredExecuteGrade);
	/* Deconstructors */
	~Form();

	/* Overloaded Operators */
	Form &operator=(const Form &sec);

	/* Public Methods */
	void beSigned(const Bureaucrat &buero);

	/* Getter */
	std::string getName() const;
	bool getStatus() const;
	unsigned int getSignGrade() const;
	unsigned int getExecuteGrade() const;

	/* Setter */

	/* Exceptions */
	struct GradeTooLowException : public std::exception
	{
		const char *what() const throw()
		{
			return "Grade too low";
		}
	};

	struct GradeTooHighException : public std::exception
	{
		const char *what() const throw()
		{
			return "Grade too high";
		}
	};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif