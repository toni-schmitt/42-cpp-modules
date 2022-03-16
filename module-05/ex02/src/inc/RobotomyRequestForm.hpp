#if !defined(___ROBOTOMYREQUESTFORM_HPP___)
#define ___ROBOTOMYREQUESTFORM_HPP___

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	/* Private Members */
	std::string _target;
public:
	/* Constructors */
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	RobotomyRequestForm(std::string target);
	/* Deconstructors */
	~RobotomyRequestForm();

	/* Overloaded Operators */
	RobotomyRequestForm &operator=(const RobotomyRequestForm &sec);

	/* Public Methods */
	void execute(Bureaucrat const &executor) const;

	/* Getter */
	std::string getTarget() const;

	/* Setter */
	void setTarget(std::string target);
};


#endif