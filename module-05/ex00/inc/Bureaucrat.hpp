/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:41:41 by tschmitt          #+#    #+#             */
/*   Updated: 2022/01/31 19:00:24 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___BUREAUCRAT_HPP___)
#define ___BUREAUCRAT_HPP___

#include <string>

class Bureaucrat
{
private:
	/* Private Members */
	const std::string _name = "buero";
	int _grade;
public:
	/* Constructors */
	Bureaucrat();
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat(std::string name);
	/* Deconstructors */
	~Bureaucrat();

	/* Overloaded Operators */
	Bureaucrat &operator=(const Bureaucrat &sec);

	/* Public Methods */
	void incrementGrade();
	void decrementGrade();

	/* Getter */
	const std::string getName() const;
	int getGrade() const;

	/* Setter */
	void setGrade(int grade);
};


#endif