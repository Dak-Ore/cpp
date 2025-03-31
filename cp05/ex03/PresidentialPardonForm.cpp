#include "PresidentialPardonForm.hpp"

// Default Constructor
PresidentialPardonForm::PresidentialPardonForm(): AForm("dPresidential", 25, 5)
{
	this->target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string name): AForm("presidential", 25, 5)
{
	this->target = name;
}

// Copy Constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other.getName(), 25, 5)
{
    this->target = other.target;
}

// Copy Assignment Operator
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
		*this = other.target;
    return *this;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned())
	{
		if (executor.getGrade() <= this->getGradeExec())
			std::cout <<  this->target << " has been pardoned by Zaphod Beeblerox" << std::endl;
		else
			throw AForm::GradeTooLowException();
	}
	else
		throw AForm::FormNotSigned();

}
