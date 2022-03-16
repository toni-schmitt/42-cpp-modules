#include "Intern.hpp"

#include <iostream>

/* Constructors */
Intern::Intern()
{
	// std::cout << "Intern Default Constructor called" << std::endl;
	/*CODE*/
}

Intern::Intern(const Intern &copy)
{
	// std::cout << "Intern Copy Constructor called" << std::endl;
	/*CODE*/
	(void)copy;
}

/* Deconstructors */
Intern::~Intern()
{
	// std::cout << "Intern Deconstructor called" << std::endl;
	/*CODE*/
}

/* Overloaded Operators */
Intern &Intern::operator=(const Intern &sec)
{
	// std::cout << "Intern Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	/*CODE*/
	return *this;
}

/* Public Methods */
AForm *Intern::createShrubberyCreationForm(const std::string target) const
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomyRequestForm(const std::string target) const
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidentialPardonForm(const std::string target) const
{
	return new PresidentialPardonForm(target);
}


AForm *Intern::makeForm(std::string form_name, std::string form_target) const 
{
	static const std::string aviable_forms[] = {
		"ShrubberyCreation",
		"RobotomyRequest",
		"PresidentialPardon"
	};

	static AForm *(Intern::* const creation_functions[])(const std::string target) const = {
		&Intern::createShrubberyCreationForm,
		&Intern::createRobotomyRequestForm,
		&Intern::createPresidentialPardonForm,
	};


	for (size_t i = 0; i < aviable_forms->length(); i++)
	{
		if (form_name == aviable_forms[i])
			return (this->*creation_functions[i])(form_target);
	}
	
	std::cerr << form_name << " for " << form_target << " not found" << std::endl;
	return NULL;
}

/* Getter */

/* Setter */

