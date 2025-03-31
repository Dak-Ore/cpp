#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include "AForm.hpp"

class RobotomyRequestForm : virtual public AForm
{
	public:
		// Default Constructor
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name);
		
		// Copy Constructor
		RobotomyRequestForm(const RobotomyRequestForm& other);
		
		// Copy Assignment Operator
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		
		// Destructor
		~RobotomyRequestForm();

		void execute(Bureaucrat const & executor) const;
	private:
		std::string target;
};

#endif
