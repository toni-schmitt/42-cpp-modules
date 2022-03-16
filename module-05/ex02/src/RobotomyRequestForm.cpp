#include "RobotomyRequestForm.hpp"

#include <iostream>
#include <cstdlib>

/* Constructors */
RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45)
{
	this->_target = "undefined";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
	std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
	/*CODE*/
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45)
{
	/*CODE*/
	this->_target = target;
}

/* Deconstructors */
RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm Deconstructor called" << std::endl;
	/*CODE*/
}

/* Overloaded Operators */
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &sec)
{
	std::cout << "RobotomyRequestForm Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	/*CODE*/
	return *this;
}

/* Public Methods */
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);

	std::cout << "brrrrr" << std::endl;
	
	std::srand(std::time(NULL));
	int rnd = std::rand() % 100;
	std::string result = "";
	if (rnd > 50)
		result = "successfull";
	else
		result = "failed";

	std::cout << "Robotomy of " << this->getTarget() << " " << result << std::endl;

}

/* Getter */
std::string RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

/* Setter */
void RobotomyRequestForm::setTarget(std::string target)
{
	this->_target = target;
}
