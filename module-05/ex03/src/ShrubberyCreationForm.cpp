#include "ShrubberyCreationForm.hpp"

#include <iostream>
#include <fstream>

/* Constructors */
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137)
{
	this->_target = "undefined";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
	/*CODE*/
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", 145, 137)
{
	this->_target = target;
}

/* Deconstructors */
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm Deconstructor called" << std::endl;
	/*CODE*/
}

/* Overloaded Operators */
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &sec)
{
	std::cout << "ShrubberyCreationForm Assignation operator called" << std::endl;
	if (this == &sec)
		return *this;

	/*CODE*/
	return *this;
}

//        _-_
//     /~~   ~~\
//  /~~         ~~\
// {               }
//  \  _-     -_  /
//    ~  \\ //  ~
// _- -   | | _- _
//   _ -  | |   -_
//       // \\

/* Public Methods */
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);

	std::ofstream shrubbery;
	shrubbery.open(this->_target + "_shrubbery");
	shrubbery << "        _-_" << std::endl;
	shrubbery << "     /~~   ~~\\" << std::endl;
	shrubbery << "  /~~         ~~\\" << std::endl;
	shrubbery << " {               }" << std::endl;
	shrubbery <<  "  \\  _-     -_  /" << std::endl;
	shrubbery << "    ~  \\\\ //  ~" << std::endl;
	shrubbery << " _- -   | | _- _" << std::endl;
	shrubbery << "   _ -  | |   -_" << std::endl;
	shrubbery << "       // \\\\" << std::endl;
	shrubbery.close();
}

/* Getter */
std::string ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

/* Setter */
void ShrubberyCreationForm::setTarget(std::string target)
{
	this->_target = target;
}
