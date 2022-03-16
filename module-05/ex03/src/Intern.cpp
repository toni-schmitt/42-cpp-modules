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
AForm *Intern::makeForm(std::string form_name, std::string form_target) const 
{
	return NULL;
}

/* Getter */

/* Setter */

