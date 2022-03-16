#if !defined(___INTERN_HPP___)
#define ___INTERN_HPP___

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	/* Private Members */
public:
	/* Constructors */
	Intern();
	Intern(const Intern& copy);
	/* Deconstructors */
	~Intern();

	/* Overloaded Operators */
	Intern &operator=(const Intern &sec);

	/* Public Methods */
	AForm *createShrubberyCreationForm(const std::string target) const;
	AForm *createRobotomyRequestForm(const std::string target) const;
	AForm *createPresidentialPardonForm(const std::string target) const;
	AForm *makeForm(std::string form_name, std::string form_target) const;

	/* Getter */

	/* Setter */

};


#endif