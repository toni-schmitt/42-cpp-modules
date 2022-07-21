#if !defined(___PRESIDENTIALPARDONFORM_HPP___)
#define ___PRESIDENTIALPARDONFORM_HPP___

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	/* Private Members */
	std::string _target;
public:
	/* Constructors */
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	PresidentialPardonForm(std::string target);
	/* Deconstructors */
	~PresidentialPardonForm();

	/* Overloaded Operators */
	PresidentialPardonForm &operator=(const PresidentialPardonForm &sec);

	/* Public Methods */
	void execute(Bureaucrat const &executor) const;

	/* Getter */
	std::string getTarget() const;

	/* Setter */
	void setTarget(std::string target);

};

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &form);

#endif