#if !defined(___SHRUBBERYCREATIONFORM_HPP___)
#define ___SHRUBBERYCREATIONFORM_HPP___

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	/* Private Members */
	std::string _target;
public:
	/* Constructors */
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	ShrubberyCreationForm(std::string target);
	/* Deconstructors */
	~ShrubberyCreationForm();

	/* Overloaded Operators */
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &sec);

	/* Public Methods */
	void execute(Bureaucrat const &executor) const;

	/* Getter */
	std::string getTarget() const;

	/* Setter */
	void setTarget(std::string target);

};


#endif