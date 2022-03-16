#include "PresidentialPardonForm.hpp"

#include <iostream>

/* Constructors */
PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5)
{
	this->_target = "undefined";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy)
{
	std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
	/*CODE*/
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5)
{
	this->_target = target;
}

/* Deconstructors */
PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm Deconstructor called" << std::endl;
	/*CODE*/
}

/* Overloaded Operators */
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &sec)
{
	std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	/*CODE*/
	return *this;
}

/* Public Methods */
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	this->AForm::execute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

/* Getter */
std::string PresidentialPardonForm::getTarget() const
{
	return this->_target;
}

/* Setter */
void PresidentialPardonForm::setTarget(std::string target)
{
	this->_target = target;
}
