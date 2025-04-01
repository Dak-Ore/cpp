#include "RobotomyRequestForm.hpp"

// Default Constructor
RobotomyRequestForm::RobotomyRequestForm() : AForm("drobotomy", 72, 45)
{
	this->target = "default";
}

// Default Constructor
RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm("robotomy", 72, 45)
{
	this->target = name;
}

// Copy Constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other.getName(), 72, 45)
{
	this->target = other.target;
}

// Copy Assignment Operator
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) 
{
    if (this != &other) {
        this->target = other.target;
    }
    return *this;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm() 
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned())
	{
		if (executor.getGrade() <= this->getGradeExec())
		{
			srand(time(0));
			int random = rand() % 2;
			std::cout << "* drilling noises *" << std::endl;
			if (random)
				std::cout << this->target << " has been robotomized successfully !" << std::endl;
			else
				std:: cout << "robotomy failed." << std::endl;
		}
		else
			throw AForm::GradeTooLowException();
	}
	else
		throw AForm::FormNotSigned();

}
