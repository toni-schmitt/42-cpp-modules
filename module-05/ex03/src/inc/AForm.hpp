/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:07:40 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 15:27:13 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___AFORM_HPP___)
#define ___AFORM_HPP___

#include "Bureaucrat.hpp"
class Bureaucrat;
#include <string>
#include <exception>

class AForm
{
private:
	/* Private Members */
	const std::string _name;
	bool _isSigned;
	const unsigned int _requiredSignGrade;
	const unsigned int _requiredExecuteGrade;

public:
	/* Constructors */
	AForm();
	AForm(const AForm &copy);
	AForm(std::string name, unsigned int requredSignGrade, unsigned int requiredExecuteGrade);
	/* Deconstructors */
	~AForm();

	/* Overloaded Operators */
	AForm &operator=(const AForm &sec);

	/* Public Methods */
	void beSigned(Bureaucrat const &buero);
	virtual void execute(Bureaucrat const &executor) const;

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

	struct FormNotSignedException : public std::exception
	{
		const char *what() const throw()
		{
			return "Form not signed";
		}
	};
};

std::ostream &operator<<(std::ostream &os, AForm form);

#endif