#if !defined(___INTERN_HPP___)
#define ___INTERN_HPP___

#include "AForm.hpp"

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
	AForm *makeForm(std::string form_name, std::string form_target) const;

	/* Getter */

	/* Setter */

};


#endif